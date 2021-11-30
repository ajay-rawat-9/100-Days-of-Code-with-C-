#include<iostream>
#include<vector>
using namespace std;
vector<long long> factorial(int n,vector<int> a){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    vector<long long> fact;
    long long factorial=1;
    for(int i=2;i<=max;i++){
        if(i>12){
            factorial*=i%1000000007;
            factorial%=1000000007;
            fact.push_back(factorial);
        }else{
            factorial*=i;
            fact.push_back(factorial);
            if(i==12){
                factorial%=1000000007;
            }
        }
    }
    vector<long long> array;
    for(int i=0;i<n;i++){
        if(a[i]==0||a[i]==1){
            array.push_back(1);
        }else{
            array.push_back(fact[a[i]-2]);
        }
    }
    return array;
}
int main(){
    cout<<"Enter the number of data:\n";
    int N,temp;
    cin>>N;
    cout<<"\nEnter the data:\n";
    vector <int>array;
    for(int i=0;i<N;i++){
        cin>>temp;
        array.push_back(temp);
    }
    vector<long long> fact=factorial(N,array);
    for(int i=0;i<N;i++){
        cout<<factorial[i]<<" ";
    }
}
