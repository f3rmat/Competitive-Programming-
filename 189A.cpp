#include<bits/stdc++.h>
using namespace std;
int dp[12005];
int k[3];
int main()
{
	int n;
	cin>>n>>k[0]>>k[1]>>k[2];
	
	for(int i = 1; i<=n; i++)
	{
		for(int j = 0; j<=2; j++)
		{
			if(i%k[j]==0)
			{
				dp[i] = max(dp[i], i/k[j]);
			}
		}
	}
	
	for(int i = 1; i<=n; i++)
	{
		if(dp[i]!=0)
		{
			for(int j = 0; j<=2; j++)
			{
				dp[i+k[j]] = max(dp[i+k[j]], dp[i] + 1);
			}
		}
	}
	
	cout<<dp[n];
	
	return 0;
}
