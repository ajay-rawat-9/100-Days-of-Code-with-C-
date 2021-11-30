#include<bits/stdc++.h>
using namespace std;
class Max_stock_profit{
public:
    int n;
    vector <int> stock;
    int Max(int,int);
    int Solution(int,int);
    int Solution();
    vector<vector<int>> Solution2();
    Max_stock_profit();
};
Max_stock_profit::Max_stock_profit(){
    int choice;
    cout<<"Manual Input- 1\nAutomatic Input- 2\n";
    cin>>choice;
    if(choice==1){
        cout<<"Enter the number of data\n";
        cin>>n;
        system("CLS");
        cout<<"Enter the data: ";
        for(int i=0;i<n;i++){
            cin>>choice;
            stock.push_back(choice);
        }
    }else{
        n=7;
        stock.push_back(100);
        stock.push_back(180);
        stock.push_back(260);
        stock.push_back(310);
        stock.push_back(40);
        stock.push_back(535);
        stock.push_back(695);
    }
    system("CLS");
}
int Max_stock_profit::Max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int Max_stock_profit::Solution(int start_point,int end_point){
    int current_profit;
    int profit=0;
    for(int i=start_point;i<end_point;i++){
        for(int j=i+1;j<=end_point;j++){
            if(stock[j]>stock[i]){
                current_profit=stock[j]-stock[i]+Solution(start_point,i-1)+Solution(j+1,end_point);
                profit=Max(profit,current_profit);
            }
        }
    }
    return profit;
}
int Max_stock_profit::Solution(){
    int i=0,minima,maxima,total=0;
    if(n==1){
        return 0;
    }
    while(i<n-1){
        while(i<n-1&&stock[i+1]<=stock[i]){
            i++;
        }
        if(i==n-1){
            break;
        }
        minima=i++;
        while(i<n&&stock[i]>=stock[i-1]){
            i++;
        }
        maxima=i-1;
        cout<<"The Buying day should be: "<<minima+1;
        cout<<"\nThe Selling day should be: "<<maxima+1<<endl;
        total+=stock[maxima]-stock[minima];
    }
    return total;
}
vector<vector<int>> Max_stock_profit::Solution2(){
    vector<vector <int>> Array;
        vector<int> temp;
        if(n==1){
            return Array;
        }
        temp.push_back(0);
        temp.push_back(0);
        int maxima,minima,i=0;
        while(i<n-1){
            while(i<n-1&&stock[i+1]<=stock[i]){
                i++;
            }
            if(i==n-1){
                break;
            }
            minima=i++;
            while(i<n&&stock[i]>=stock[i-1]){
                i++;
            }
            maxima=i-1;
            temp[0]=stock[minima];
            temp[1]=stock[maxima];
            Array.push_back(temp);
        }
        return Array;
}
int main(){
    Max_stock_profit x;
    int choice;
    cout<<"Which approach you want to use:\nLengthy- 1\nEfficient- 2\nGFG- 3\n";
    cin>>choice;
    system("CLS");
    if(choice==1){
        cout<<"The maximum profit you can get from here is of: "<<x.Solution(0,x.n-1);
    }else if(choice==2){
        cout<<"The maximum profit you could get is: "<<x.Solution();
    }else if(choice==3){
        vector<vector<int>> Answer=x.Solution2();
        for(int i=0;i<Answer.size();i++){
            cout<<Answer[i][0]<<" "<<Answer[i][1]<<endl;
        }
    }

}
