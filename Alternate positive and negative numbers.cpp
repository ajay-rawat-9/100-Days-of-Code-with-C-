#include<bits/stdc++.h>
using namespace std;
class Alternate_positive_and_negative_numbers{
    int n;
    vector <int> a;
    void Solution();
public:
    Alternate_positive_and_negative_numbers();
};
Alternate_positive_and_negative_numbers::Alternate_positive_and_negative_numbers(){
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
    Solution();
    system("CLS");
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void Alternate_positive_and_negative_numbers::Solution(){
    vector<int> positive,negative;
    //9 4 -2 -1 5 0 -5 -3 2
    for(int i=n-1;i>=0;i--){
        if(a[i]>=0){
            positive.push_back(a[i]);
        }else{
            negative.push_back(a[i]);
        }
    }
    for(int i=0;i<n;i++){
        if((i%2==0||negative.size()==0)&&positive.size()>0){
            a[i]=positive[positive.size()-1];
            positive.pop_back();
        }else{
            a[i]=negative[negative.size()-1];
            negative.pop_back();
        }
    }
}
int main(){
    Alternate_positive_and_negative_numbers x;
}
