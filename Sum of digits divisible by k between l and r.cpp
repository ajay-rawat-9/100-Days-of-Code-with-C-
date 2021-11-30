#include<iostream>
using namespace std;
int sum(int x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main(){
    cout<<"Enter the numbers"<<endl;
    int left;
    cin>>left;
    int right;
    cin>>right;
    int k;
    cin>>k;
    int left_sum=sum(left);
    int right_sum=sum(right);
    int count=0;
    for(int i=left;i<=right;i++){
        if(sum(i)%k==0){
            count++;
        }
    }cout<<"\nThe number of sums of digits of numbers from "<<left<<" to "<<right<<" which are divisible by "<<k<<" are: "<<count<<endl;
}
