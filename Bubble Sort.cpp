#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class Bubble_Sort{
    public:
    int n;
    vector <int> data;
    Bubble_Sort();
    void Ascending(int, vector <int>);
    void Descending(int, vector <int>);
};
Bubble_Sort::Bubble_Sort(){
    cout<<"Enter total number of data to be sorted: "<<endl;
    cin>>n;
    system("CLS");
    int temp;
    cout<<"Input the data: "<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        data.push_back(temp);
    }
    system("CLS");
    cout<<"For low to high: Enter 1\nFor high to low: Enter 2"<<endl;
    cin>>temp;
    if(temp==1){
        Ascending(n,data);
    }else{
        Descending(n,data);
    }
}
void Bubble_Sort::Ascending(int n, vector <int> data){
    system("CLS");
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i-1);j++){
            if(data[j+1]<data[j]){
                data[j+1]+=data[j];
                data[j]=data[j+1]-data[j];
                data[j+1]-=data[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
void Bubble_Sort::Descending(int n, vector <int> data){
    system("CLS");
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(data[j-1]<data[j]){
                data[j-1]+=data[j];
                data[j]=data[j-1]-data[j];
                data[j-1]-=data[j];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Bubble_Sort x;
}
