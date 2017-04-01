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
        long long int n;
        scanf("%lld",&n);
        if(n==1)
            printf("1\n");
        else if(n==2)
            printf("2\n");    
        else if(n%2)
            printf("%lld\n",n*(n-1)*(n-2));
        else if(n%6==0)
            printf("%lld\n",(n-1)*(n-2)*(n-3));
        else
            printf("%lld\n",(n)*(n-1)*(n-3));
    }
    
	return 0;
}
