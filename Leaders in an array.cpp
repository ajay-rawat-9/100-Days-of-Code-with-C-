#include<bits/stdc++.h>
using namespace std;
class Leader_in_an_array{
    int n;
    vector <int> a;
    vector<int> Solution();
public:
    Leader_in_an_array();
};
Leader_in_an_array::Leader_in_an_array(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    system("CLS");
    vector<int> answer=Solution();
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<"\n";
}
vector<int> Leader_in_an_array::Solution(){
    int max=0;
    vector<int>answer;
    for(int i=n-1;i>=0;i--){
        if(a[i]>=max){
            answer.push_back(a[i]);
            max=a[i];
        }
    }
    vector<int> answer2;
    answer2=answer;
    for(int i=0;i<answer.size();i++){
        answer[i]=answer2[answer.size()-i-1];
    }
    return answer;
}
int main(){
    Leader_in_an_array x;
}
