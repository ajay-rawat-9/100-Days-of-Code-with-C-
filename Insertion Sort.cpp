#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
class Insertion_Sort{
public:
    int n;
    vector <int> data;
    Insertion_Sort();
    void Ascending();
    void Descending();
    void Print_new_data_list();
};
Insertion_Sort::Insertion_Sort(){
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
void Insertion_Sort::Ascending(){
    int temp;
    for(int i=1;i<n;i++){
        temp=i;
        for(int j=i-1;j>=0;j--){
            if(data[j]>data[temp]){
                data[j]+=data[temp];
                data[temp]=data[j]-data[temp];
                data[j]-=data[temp];
                temp=j;
            }else{
                break;
            }
        }
        cout<<endl;
    }
    Print_new_data_list();
}
void Insertion_Sort::Descending(){
    int temp;
    for(int i=1;i<n;i++){
        temp=i;
        for(int j=i-1;j>=0;j--){
            if(data[j]<data[temp]){
                data[j]+=data[temp];
                data[temp]=data[j]-data[temp];
                data[j]-=data[temp];
                temp=j;
            }else{
                break;
            }
        }
        cout<<endl;
    }
    Print_new_data_list();
}
void Insertion_Sort::Print_new_data_list(){
    system("CLS");
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Insertion_Sort x;
}
