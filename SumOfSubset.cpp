#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool SubsetSum(vector <int> a, int n, int sum){
	bool helper[n + 1][sum + 1];

	for (int i = 1; i <= sum; i++){
		helper[0][i] = false;
	}

	for (int i = 0; i <= n; i++){
		helper[i][0] = true;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= sum; j++) {
			if (j < a[i - 1]){
				helper[i][j] = helper[i - 1][j];
			}
			if (j >= a[i - 1]){
				helper[i][j] = helper[i - 1][j]|| helper[i - 1][j -a[i - 1]];
			}
		}
	}
	return helper[n][sum];
}

int main(){
	int reqsum;
	cout<<"Enter a sum to be found."<<endl;
	cin>>reqsum;
	vector<int> a = {1,2,3,5,4,9,11,23};
	if (SubsetSum(a, a.size(), reqsum) == true){
		cout <<"Subset with sum equal to "<<reqsum<<" found.";
	}
	else{
		cout <<"Unable to find a subset with sum equal to "<<reqsum;
	}
	return 0;
}
