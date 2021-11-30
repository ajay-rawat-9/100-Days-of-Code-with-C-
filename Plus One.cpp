#include<bits/stdc++.h>
using namespace std;
class Plus_one{
    int n;
    vector <int> a;
    vector<int> Solution();
public:
    Plus_one();
};
Plus_one::Plus_one(){
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
    vector<int> answer;
    answer=Solution();
    system("CLS");
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
}
vector<int> Plus_one::Solution(){
    int carry=0;
    vector<int> answer=a;
    for(int i=n-1;i>=0;i--){
        if(i==n-1||carry==1){
            if(answer[i]!=9){
                answer[i]++;
                carry=0;
            }else{
                answer[i]=0;
                carry=1;
            }
        }
    }
    if(carry==1){
        answer.insert(answer.begin(),1);
    }
    return answer;
}
int main(){
    Plus_one x;
}
