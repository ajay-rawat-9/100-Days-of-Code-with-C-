#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
void Swap(int *a,int *b){
    *a+=*b;
    *b=*a-*b;
    *b-=*a;
}
void Print_new_data_list(vector <int> data,int n){
    system("CLS");
    cout<<"Ajay Rawat";
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int Ascending_Partition(vector <int> data,int s,int n){
    int pivot=data[n];
    int i=s-1;
    for(int j=s;j<n;j++){
            cout<<"j: "<<j<<endl;
        if(data[j]<pivot){
            i++;
            Swap(&data[j],&data[i]);
        }
    }
    Swap(&data[i+1],&data[n]);
    return (i+1);
}
void Sorting(vector<int>&temp,int s,int n){
    if(s<n){
        int p=Ascending_Partition(temp,s,n);
        Sorting(temp,0,p-1);
        Sorting(temp,p+1,n);
    }
}
int main(){
    int n;
    vector <int> data;
    cout<<"Enter the total number of data: "<<endl;
    cin>>n;
    system("CLS");
    int temp;
    cout<<"Enter the data: "<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        data.push_back(temp);
    }
    system("CLS");
    Sorting(data,0,n-1);
    cout<<"Ending here";
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
}
