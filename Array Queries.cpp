#include <bits/stdc++.h>
using namespace std;
int a[100005];
int dp[320][100005];
int n;

void preprocess(int k)
{
    for(int i=n; i>=1; i--)
    {
      if(i + a[i] + k > n)
        dp[k][i] = 1;
      else
        dp[k][i] = dp[k][i + a[i] + k] + 1;
    }
}

int solve(int p, int k)
{
	int ans = 0;
	while(p<=n)
	{
		p = p + a[p] + k;
		ans++;
	}
	
	return ans;
}

int main() {
	scanf("%d",&n);
	
	int sqrn = sqrt(n);
	
	for(int i = 1; i<=n; ++i)
		scanf("%d",&a[i]);
	
	for(int i = 1; i<=sqrn; ++i)
		preprocess(i);
	
	int q,p,k;
	scanf("%d",&q);
	
	while(q--)
	{	
		scanf("%d %d",&p,&k);
		
		if(k>sqrn)
			cout<<solve(p,k)<<"\n";
		
		else
			cout<<dp[k][p]<<"\n";
	}
	return 0;
}
