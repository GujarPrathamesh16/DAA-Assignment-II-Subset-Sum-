
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> ans;
int SumOfSubset(vector<int> v, int n, int sum){
    if (sum == 0){
        return 1; 
    }
    if (n == 0){
         return 0;
    }
    if (v[n - 1] > sum){ 
        return SumOfSubset(v, n - 1, sum);
    }
    else{
         return SumOfSubset(v, n - 1, sum) || SumOfSubset(v, n - 1, sum - v[n - 1]);
    }
}

int main(){
    vector<int> v = {3,4,16,34,6,7,25,15,10};
    int num;
    cout<<"Enter the sum to be found."<<endl;
    cin>>num;
    int flag = SumOfSubset(v,v.size(),num);
    if(flag==0){
        cout<<"No subset having sum "<<num<<"is available."<<endl;
    }
    else{
        cout<<"Subset Found with sum = "<<num<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
