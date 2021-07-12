#include <bits/stdc++.h>
using namespace std;

//Recursive	O(n^k)
int countWays(int n,int k){
	//Base
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
	int ans=0;
	for(int jump=1;jump<=k;jump++){
		ans+=countWays(n-jump,k);
	}
	return ans;

}

//TopDown Dp O(n*k)
int countWaysTD(int n,int k,int *dp){
	//Base
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}
    if(dp[n]!=0){
		return dp[n];
	}
	int ans=0;
	for(int jump=1;jump<=k;jump++){
		ans+=countWaysTD(n-jump,k,dp);
	}
	return dp[n]=ans;
}

//TopDown Dp O(n*k)
int countWaysBU(int n,int k){

	vector<int> dp(n+1,0);

	dp[0]=1;
	
	int ans=0;
	for(int i=0;i<=n;i++){
	    for(int jump=1;jump<=k;jump++){
		   if(i-jump>=0){
		   	dp[i]+=dp[i-jump];
		   }
	     }
	}
	return dp[n];
}


int main(){
	int n,k;
	int dp[1000]={0};
	cin>>n>>k;
	cout <<countWays(n,k) <<endl;
	cout <<countWaysTD(n,k,dp) <<endl;
	cout <<countWaysBU(n,k) <<endl;
	return 0;
}