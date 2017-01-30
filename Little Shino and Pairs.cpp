#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int n;
    int a[100005];
    a[0] = 0;
    a[n+1] = 0;
    scanf("%d",&n);
    for(int i = 1; i<=n; ++i)
        scanf("%d",&a[i]);
    int count = 0;
    
    for(int i = 1; i<=n; ++i)
    {
        int j = i-1; 
        int secmax = 0;
        while(j>=1 && a[i] > a[j])
        {   
            if(a[j]>secmax)
            {
                count++;
                secmax = a[j];
            }
            j--;
         
        }
        
        //printf("%d\n",count);

        j = i+1;
        secmax = 0;
        while(j<=n && a[i] > a[j])
        {
            if(a[j]>secmax)
            {
                count++;
                secmax = a[j];
            }
            j++;
        }
        
        //printf("%d\n\n",count);
        
    }
    printf("%d\n",count);
    
	return 0;
}
