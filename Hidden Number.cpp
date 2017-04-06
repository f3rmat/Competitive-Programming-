#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        scanf("%d",&n);
        int ones = 0, twos = 0 ;
 
        int common_bit_mask;
 
        for( int i=0; i< n; i++ )
        {   
            scanf("%d",&x);
            twos  = twos | (ones & x);
            ones  = ones ^ x;
            common_bit_mask = ~(ones & twos);
            ones &= common_bit_mask;
            twos &= common_bit_mask;
        }
 
        
        printf("%d\n",ones);
    }
    
	return 0;
}
