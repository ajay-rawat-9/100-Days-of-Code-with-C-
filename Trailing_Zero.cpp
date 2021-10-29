#include<iostream>
#include<vector>
using namespace std;
class Trailing_Zero{
  public:
  int N;
  Trailing_Zero(){
    cout<<"Enter any number: "<<endl;
    cin>>N;
  }
  int Solution(){
    //Solution starts here
    int temp=N;
    int Trailings=0;
    while(temp!=0){
      temp/=5;
      Trailings+=temp;
    }
    return Trailings;
  }
};
int main(){
  Trailing_Zero x;
  cout<<"The number of trailing zeros in "<<x.N<<" is/are :"<<x.Solution()<<endl;
}
