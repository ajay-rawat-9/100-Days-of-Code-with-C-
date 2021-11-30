#include<bits/stdc++.h>
using namespace std;
class Product_array_puzzle{
    int n;
    vector <int> a;
    vector<long long> Solution();
public:
    Product_array_puzzle();
};
Product_array_puzzle::Product_array_puzzle(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    system("CLS");
    cout<<"Please Wait...\n";
    vector<long long> answer;
    answer=Solution();
    system("CLS");
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}
vector<long long> Product_array_puzzle::Solution(){
    long long temp=1;
    int count_0=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp*=a[i];
        }else{
            count_0++;
        }
    }
    vector<long long> answer;
    for(int i=0;i<n;i++){
        if(count_0>1){
            answer.push_back(0);
        }else if(count_0==1){
            if(a[i]==0){
                answer.push_back(temp);
            }else{
                answer.push_back(0);
            }
        }else{
            answer.push_back(temp/a[i]);
        }
    }
    return answer;
}
int main(){
    Product_array_puzzle x;
}
