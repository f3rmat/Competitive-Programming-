#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int sumt[1000005];
int check(int z)
{
    int a[10]={0};
    int count = 0;
    while(z>0)
    {
        count++;
        a[z%10]++;
        z = z/10;
    }
    
    if(a[0] > 0)
    return 0;
    
    for(int i = 1; i<=count; ++i)
    {
        if(a[i]!=1)
        return 0;
    }
    
    for(int i = count+1; i<=9; i++)
    {
        if(a[i]!=0)
        return 0;
    }
    
    return 1;
}


void solve()
{
    for(int i = 1; i<=1000001; i++)
    sumt[i] = check(i);
    
    for(int i = 2; i<=1000001; i++)
    sumt[i]+=sumt[i-1];
    
}

int main() 
{
    int q;
    scanf("%d",&q);
    solve();
    while(q--)
    {
        int l,r;

        scanf("%d %d",&l,&r);
        
        printf("%d\n",sumt[r]-sumt[l-1]);
    }
    
	return 0;
}
