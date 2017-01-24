#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int a[50005][26];
int main() 
{
    int n,q,l,r,target,sum,flag;
    memset(a,0,sizeof(int)*26*50005);
    
    scanf("%d %d",&n,&q);
    string s;
    cin>>s;
    
    for(int i = 0; i<=n-1; i++)
    {
     a[i+1][s[i]-97]++;   
    }
    
    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<=25; j++)
        {
            a[i][j] = a[i][j] + a[i-1][j];
        }
    }
    
    /*for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<=25; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    for(int i = 1; i<=q; i++)
    {
        scanf("%d %d %d",&l,&r,&target);
        sum = 0; flag=1;
        for(int j = 0; j<=25; j++)
        {
            sum = sum + a[r][j]-a[l-1][j];
            //cout<<sum<<endl;
            if(sum>=target)
            {
                printf("%c\n",(j+97));
                flag=0;
                break;
            }
        }
        
        if(flag)
        printf("Out of range\n");
    }
    
    
	return 0;
}
