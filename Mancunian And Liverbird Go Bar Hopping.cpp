#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
long long int a[1000005];
int aux1[1000005], aux3[1000005];
int aux2[1000005], aux4[1000005];
int n;
void solve()
{
    int x = 0;
    aux1[n-1] = 0;
    
    for( int i = n-2; i >= 0; i-- )
    {
        if( a[i] == 1 )x++;
        else x = 0;
        aux1[i] = x;
    }
    
    x = 0;
    aux2[0] = 0;
    
    for( int i = 1 ; i < n; i++ )
    {
        if( a[i-1] == 0 )x++;
        else x = 0;
        aux2[i] = x;
    }
    
    x= 0;
    aux1[n-1] = 0;
    for( int i = n-2; i >= 0; i-- )
    {
        if( a[i] == 0 )x++;
        else x = 0;
        aux3[i] = x;
    }
    
    x = 0;
    aux4[0] = 0;
    for( int i = 1 ; i < n; i++ )
    {
        if(a[i-1]==1)x++;
        else x = 0;
        aux4[i] = x;
    }
    
    
}
int main() 
{
    scanf("%d",&n);
    
    for( int i = 0; i < n-1; i++ )
        scanf("%lld",&a[i]);
    
    solve();
    int q;
    cin>>q;
    int x = 0;
    
    int countupdate = 0;
    while(q--)
    {
        char cahar;
        cin>>cahar;
        if(cahar=='Q')
        {
            cin>>x;
            
            if( countupdate%2==1 )
                printf("%d\n",aux3[x-1]+aux4[x-1]+1);
            else
                printf("%d\n",aux1[x-1]+aux2[x-1]+1);
        }
        else
            countupdate++;
    }
    
    return 0;
}
