#include<iostream>
using namespace std;
int Maximum_1(int n, int m, int *arr){
    arr=new int[n];
    int max_m[n],max[n],maximum,o;
    for(int i=0;i<n;i++){
        maximum=max[0];
        max_m[i]=m;
        if(arr[i]==0){
            for(int j=0;j<=i;j++){
                if(max_m[j]>0){
                    max_m[j]--;
                }else if(max_m[j]==0){
                    max[j]=i-j;
                    max_m[j]--;
                }
                if(max[j]>maximum){
                    maximum=max[j];
                    o=j;
                }
            }
        }
    }
    cout<<o<<endl;
}
int main(){
    cout<<"Enter the number of data: ";
    int N=0;
    while(N<=0){
        cin>>N;
    }
    cout<<"\nEnter the data: ";
    int *array=new int[N];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    cout<<"\nEnter m: ";
    int M;
    cin>>M;
    cout<<Maximum_1(N,M,array);
}
