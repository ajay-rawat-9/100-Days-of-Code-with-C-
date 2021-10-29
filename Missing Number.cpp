#include<iostream>
using namespace std;
class Missing_Number{
  private:
  int n;
  int *array;
  int sum_of_array;
  void read_number_of_data(){
    cin>>n;
  }
  void read_array_values(){
    array=(int*)calloc(n-1,sizeof(int));
    cout<<"Enter the Numbers in the range 1 to "<<n<<endl;
    for(int i=0;i<(n-1);i++){
      cin>>array[i];
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
