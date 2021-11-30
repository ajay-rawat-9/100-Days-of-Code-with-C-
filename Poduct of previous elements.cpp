#include<iostream>
using namespace std;
int Product(){
    cout<<"Enter the number of data: \n";
    int n;
    cin>>n;
    cout<<"\nEnter the data elements: \n";
    int *a{new int(n)};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        return -1;
    }
    int temp;
    bool product=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]%a[j]!=0){
                continue;
            }
            temp=a[i]/a[j];
            for(int k=j;k<=j;k++){
                if(a[k]==temp){
                    product=true;
                    break;
                }
            }
            if(!product){
                break;
            }
        }
        if(!product){
            break;
        }
    }
    if(product){
        return 1;
    }
    return -1;
}
int main(){
    cout<<Product();
}
