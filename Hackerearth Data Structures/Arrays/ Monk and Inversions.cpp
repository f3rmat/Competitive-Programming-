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
        int n;
        scanf("%d",&n);
        int a[21][21];
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        int count = 0;
        for(int i =1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                for(int p = i; p<=n; p++)
                {
                    for(int q = j; q<=n; q++)
                    {
                        if(a[i][j] > a[p][q])
                        count++;
                    }
                }
            }
        }
        
        printf("%d\n",count);
        
    }
    
	return 0;
}
