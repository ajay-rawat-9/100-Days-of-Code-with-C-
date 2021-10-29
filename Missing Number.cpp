#include<iostream>
#include<vector>
using namespace std;
class Missing_Number{
  private:
  int n;
  vector <int> array;
  int sum_of_array;
  void read_number_of_data(){
    cin>>n;
  }
  void read_array_values(){
    cout<<"Enter the Numbers in the range 1 to "<<n<<endl;
    int number;
    for(int i=0;i<(n-1);i++){
      cin>>number;
      array.push_back(number);
    }
  }
  void sum(){
    sum_of_array=n*(n+1)/2;
  }
  public:
  Missing_Number(){
      read_number_of_data();
      read_array_values();
  }
  int solution(){
    //Solution starts here
    sum();
    for(int i=0;i<(n-1);i++){
      sum_of_array-=array[i];
    }
    return sum_of_array;
  }
};
int main(){
  //Reading the data
  Missing_Number x;
  cout<<"The missing number in the provided array is : "<<x.solution()<<endl;
}
