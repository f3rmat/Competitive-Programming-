#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int a[100005];
int presum[100005];
int main() 
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {   
        scanf("%d",&n);
        for(int i = 1; i<=n; ++i)
        {
            scanf("%d",&a[i]);
            if(a[i]==-1)
                presum[i] = presum[i-1] + 1;
            else
                presum[i] = presum[i-1];
        }
        int ans = 1000000;
        
        for(int j = 1; j<=n-1; ++j)//1 to j all are -1 and j+1 to n all are 1
        {
            ans = min(ans, (j-presum[j]) +(presum[n] - presum[j]));
        }
        printf("%d\n",ans);
    }
    
	return 0;
}
