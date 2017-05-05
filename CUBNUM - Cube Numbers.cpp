#include <bits/stdc++.h>
using namespace std;
int ans[100005];
void solve()
{	
	ans[0] = 0;
	ans[1] = 1;

	for(int i = 2; i<=100001; i++)
	{
		ans[i] = i;

		for(int x = 1; x*x*x<=i; x++)
		{
			ans[i] = min(ans[i], 1 + ans[i-x*x*x]);
		}
	}

}

int main()
{
	int n;
	solve();
	int i = 0;
	while(scanf("%d",&n)!=EOF)
	{	
		i++;
		printf("Case #%d: %d\n",i,ans[n]);
	}
	return 0;
}
