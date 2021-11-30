#include<bits/stdc++.h>
using namespace std;
class Majority_Element{
    int n;
    vector <int> a;
    int Solution();
public:
    Majority_Element();
};
Majority_Element::Majority_Element(){
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
    temp=Solution();
    if(temp==-1){
        cout<<"The majority element do not exist";
    }else{
        cout<<"The majority element is: "<<temp<<"\n";
    }

}
int Majority_Element::Solution(){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    vector<int> array(max+1,0);
    for(int i=0;i<n;i++){
        array[a[i]]++;
    }
    int answer=-1;
    for(int i=1;i<n;i++){
            cout<<a[i]<<" have appeared: "<<array[a[i]]<<" times\n";
        if(array[a[i]]>n/2){
            answer=a[i];
        }
    }
    return answer;
}
int main(){
    Majority_Element x;
}
