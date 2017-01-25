#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int check(int* a, int* b, int n)
{
    for(int i = 0; i<n; ++i)
    {
        if(a[i]!=b[i])
        return 0;
    }
    return 1;
}

int main() 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,h;
        scanf("%d %d",&n,&h);
        int a[105],b[105];
        for(int i = 0; i<=n-1; ++i)
            scanf("%d",&a[i]);
        
        while(h--)
        {
            for(int i = 0; i<=n-1; ++i)
            {
                if(i==0)
                {
                    (a[i+1]==1)?(b[i]=1):(b[i]=0);
                }
                
                else if(i==n-1)
                {
                    (a[i-1]==1)?(b[i]=1):(b[i]=0);
                }
                
                else
                {
                    (a[i-1]==1 && a[i+1]==1)?(b[i]=1):(b[i]=0);
                }
                
                
            }
            
            if(check(a,b,n))
            break;
            
            for(int i = 2; i<n; ++i)
                a[i-2] = b[i-2];
                
            a[n-2] = b[n-2];
            a[n-1] = b[n-1];
        }
        for(int i=0;i<n;i++)
            printf("%d ",a[i]);
        
        cout<<"\n";
    }
    
	return 0;
}
