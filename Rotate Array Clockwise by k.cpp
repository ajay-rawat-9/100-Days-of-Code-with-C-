#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of elements\n";
    int n;
    int *array{new int(n)};
    cin>>n;
    cout<<"\nEnter the data here: \n";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"\nEnter the number by which you wish to rotate your array\n";
    int k;
    cin>>k;
    while(k>n){
        k-=n;
    }
    int temp1,temp2;
    for(int i=0;i<k;i++){
        temp1=array[0];
        array[0]=array[n-1];
        for(int j=1;j<n;j++){
            if(j==1){
                temp2=array[1];
                array[1]=temp1;
            }else{
                array[j]+=temp2;
                temp2=array[j]-temp2;
                array[j]-=temp2;
            }
        }
    }
    cout<<"After rotation, the new array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
}
