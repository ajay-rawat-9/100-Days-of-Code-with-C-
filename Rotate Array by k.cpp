#include<bits/stdc++.h>
using namespace std;
class Rotate_array_by_k{
    int n;
    int d;
    vector <int> a;
    void Clockwise();
    void Counter_clockwise();
public:
    Rotate_array_by_k();
};
Rotate_array_by_k::Rotate_array_by_k(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"\nEnter the number of rotations: \n";
    cin>>d;
    cout<<"\nDirection:\nClockwise- 1\nCounter-Clockwise- 2\n";
    cin>>temp;
    system("CLS");
    if(temp==1){
        Clockwise();
    }else{
        Counter_clockwise();
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void Rotate_array_by_k::Clockwise(){
    int arr[n-d];
    for(int i=0;i<n;i++){
            if(i<n-d){
                arr[i]=a[i];
            }
            if(n-d+i<n){
                a[i]=a[n-d+i];
            }else{
                a[i]=arr[i-d];
            }

        }
}
void Rotate_array_by_k::Counter_clockwise(){
    int arr[d];
    for(int i=0;i<n;i++){
            if(i<d){
                arr[i]=a[i];
            }
            if(i<n-d){
                a[i]=a[d+i];
            }else{
                a[i]=arr[i-n+d];
            }
        }
}
int main(){
    Rotate_array_by_k x;
}
