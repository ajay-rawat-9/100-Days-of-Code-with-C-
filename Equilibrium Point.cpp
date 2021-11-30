#include<bits/stdc++.h>
using namespace std;
class Equilibrium_Point{
    int n;
    vector<long long> List;
    long long Solution();
public:
    Equilibrium_Point();

};
Equilibrium_Point::Equilibrium_Point(){
    long long temp;
    cout<<"Enter the number of the data: \n";
    cin>>n;
    cout<<"Enter the data:\n";
    for(int i=0;i<n;i++){
        cin>>temp;
        List.push_back(temp);
    }
    /*n=5;
    List.push_back(1);
    List.push_back(3);
    List.push_back(5);
    List.push_back(2);
    List.push_back(2);*/
    system("CLS");
    cout<<"Please wait...";
    temp=Solution();
    system("CLS");
    if(temp==-1){
        cout<<"There is no equilibrium point exist.";
    }else{
        for(int i=0;i<List.size();i++){
            cout<<List[i]<<" ";
        }
        cout<<endl;
        cout<<"Left sum = Right sum is at position:\t"<<temp<<endl;
    }
}
long long Equilibrium_Point::Solution(){
    if(n==1){
        return 1;
    }
    int left=List[0],right=List[n-1],l=1,r=n-2;
    while(l<=r){
        if(left==right){
            if(l==r){
                return l+1;
                break;
            }else{
                left+=List[l];
                l++;
            }
        }else if(left<right){
            left+=List[l];
            l++;
        }else{
            right+=List[r];
            r--;
        }
    }
    cout<<left<<" "<<right;
    return -1;
}
int main(){
    Equilibrium_Point *x =new Equilibrium_Point;
    delete x;
}
