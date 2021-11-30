#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class Selection_Sort{
public:
    int n;
    vector <int> data;
    Selection_Sort();
    void Ascending();
    void Descending();
    void Print_new_data_list();
};
Selection_Sort::Selection_Sort(){
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
    cout<<"For Ascending: Enter 1\nFor Descending: Enter 2\n"<<endl;
    cin>>temp;
    if(temp==1){
        Ascending();
    }
    else{
        Descending();
    }
}
void Selection_Sort::Ascending(){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(data[j]<data[min]){
                min=j;
            }
        }
        if(min!=i){
            data[i]+=data[min];
            data[min]=data[i]-data[min];
            data[i]-=data[min];
        }
    }
    Print_new_data_list();
}
void Selection_Sort::Descending(){
    int max;
    for(int i=0;i<n-1;i++){
        max=i;
        for(int j=i;j<n;j++){
            if(data[j]>data[max]){
                max=j;
            }
        }
        if(max!=i){
            data[i]+=data[max];
            data[max]=data[i]-data[max];
            data[i]-=data[max];
        }
    }
    Print_new_data_list();
}
void Selection_Sort::Print_new_data_list(){
    system("CLS");
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Selection_Sort x;
}
