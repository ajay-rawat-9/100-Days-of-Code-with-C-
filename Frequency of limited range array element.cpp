#include<bits/stdc++.h>
using namespace std;
class Frequency_of_limited_range_array_element{
    int n;
    int p;
    vector <int> a;
    void Solution();
public:
    Frequency_of_limited_range_array_element();
};
Frequency_of_limited_range_array_element::Frequency_of_limited_range_array_element(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"Enter the range of data:\n";
    cin>>p;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        while(temp<1||temp>p){
            cin>>temp;
        }
        a.push_back(temp);
    }
    system("CLS");
    cout<<"Please Wait...\n";
    Solution();
    system("CLS");
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void Frequency_of_limited_range_array_element::Solution(){
    int d=p+1;
    for(int i =0;i<n;i++){
        if(a[i]%d<=n){
            a[a[i]%d-1]+=d;
        }
    }
    for(int i=0;i<n;i++){
        a[i]/=d;
    }
}
int main(){
    Frequency_of_limited_range_array_element x;
}
