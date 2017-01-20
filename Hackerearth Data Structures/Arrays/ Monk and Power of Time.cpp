#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
int b[105];
int main() 
{
    queue<int>q;
    int n,x,ans=0,j=1;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d",&x);
        q.push(x);
    }
    for(int i = 1; i<=n; i++)
    {
        scanf("%d",&b[i]);
    }
    
    while(j<=n)
    {
        x = q.front();
        if(x==b[j])
        {
            j++;
            q.pop();
        }
        else
        {   
            q.pop();
            q.push(x);
        }
        ans++;
        
    }
    
    printf("%d",ans);
    
    
	return 0;
}
