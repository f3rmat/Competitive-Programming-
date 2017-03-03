#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n,k,max=-10000000;
        scanf("%d %d",&n,&k);
        for(int i = 1; i<=n; ++i)
        {
            scanf("%d",&x);
            if(k - x > max)
            max = k - x;
        }
        
        if(max>0)
        printf("%d\n",max);
        else printf("0\n");
    }
    
	return 0;
}
