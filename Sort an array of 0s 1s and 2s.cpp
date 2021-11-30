#include<bits/stdc++.h>
using namespace std;
class Sort_an_array_of_0_1_2{
    int n;
    vector <int> a;
    void Solution();
public:
    Sort_an_array_of_0_1_2();
};
Sort_an_array_of_0_1_2::Sort_an_array_of_0_1_2(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    system("CLS");
    Solution();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void Sort_an_array_of_0_1_2::Solution(){
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count_0++;
        }else if(a[i]==1){
            count_1++;
        }else if(a[i]==2){
            count_2++;
        }
    }
    for(int i=0;i<n;i++){
        if(count_0>0){
            a[i]=0;
            count_0--;
        }else if(count_1>0){
            a[i]=1;
            count_1--;
        }else if(count_2>0){
            a[i]=2;
            count_2--;
        }
    }
}
int main(){
    Sort_an_array_of_0_1_2 x;
}
