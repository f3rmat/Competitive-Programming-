#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    int x,n,count=0;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        cin>>x;
        if((x+3000000)%3!=0)
        count++;
    }
    cout<<count;
	return 0;
}
