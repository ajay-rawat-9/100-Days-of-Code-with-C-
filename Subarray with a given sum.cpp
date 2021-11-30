#include<bits/stdc++.h>
using namespace std;
class Subarrray_with_a_given_sum{
    int n;
    long long s;
    vector <int> a;
    vector<int> Solution();
public:
    Subarrray_with_a_given_sum();
};
Subarrray_with_a_given_sum::Subarrray_with_a_given_sum(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"\nEnter the required sum: ";
    cin>>s;
    system("CLS");
    vector<int> answer=Solution();
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<"\n";
}
vector<int> Subarrray_with_a_given_sum::Solution(){
    long long sum=0;
    int first=0;
    int last=0;
    vector<int> answer;
    while(last<=n&&first<=n){
        if(sum<s){
            sum+=a[last];
            last++;
        }else if(sum>s){
            sum-=a[first];
            first++;
        }
        if(sum==s){
            answer.push_back(first+1);
            answer.push_back(last);
            return answer;
            break;
        }
        cout<<first<<" "<<last<<endl;
    }
    answer.push_back(-1);
    return answer;
}
int main(){
    Subarrray_with_a_given_sum x;
}
