#include<bits/stdc++.h>
using namespace std;
class Rearrange_array_alternatievely{
    int n;
    vector <long long> a;
    void Solution();
public:
    Rearrange_array_alternatievely();
};
Rearrange_array_alternatievely::Rearrange_array_alternatievely(){
    cout<<"Enter the the number of data: ";
    cin>>n;
    cout<<"\nEnter the data:\n";
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    system("CLS");
    Solution();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void Rearrange_array_alternatievely::Solution(){
    long long *temp=new long long[n];
    	for(int i=0;i<n;i++){
    	    temp[i]=a[i];
    	}
        int first=0,last=n-1,i=0;
        while(first<=last){
            if(i%2==0){
                a[i]=temp[last];
                last--;
            }else{
                a[i]=temp[first];
                first++;
            }
            i++;
        }
    	delete temp;
}
int main(){
    Rearrange_array_alternatievely x;
}
