#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int main()
{
	string a;
	cin>>a;
	for(int i = 0; i<=(int)a.length()-2; i++)
	{
		if(a[i]==a[i+1])
		dp[i+1]=1;
	}
	
	for(int i = 2; i<=(int)a.length(); i++)
	{
		dp[i] = dp[i] + dp[i-1];
	}
	
	int m;
	int l,r;
	cin>>m;
	
	for(int i = 1; i<=m; i++)
	{
		cin>>l>>r;
		cout<<dp[r-1]-dp[l-1]<<endl;
	}
	
	return 0;
}
