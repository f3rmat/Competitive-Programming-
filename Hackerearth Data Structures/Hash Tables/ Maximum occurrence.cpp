#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    string a;
    getline(cin,a);
    int b[150];
    memset(b,0,sizeof(int)*150);
    
    for(int i = 0; i<a.length(); ++i)
    {
        b[a[i]-' ']++;
    }
    
    int maxi = 0;
    char maxc = 'a';
    for(int i = 0; i<150; ++i)
    {
        if(b[i]>maxi)
        {
            maxi = b[i];
            maxc = (char)(i + ' ');
        }
    }
    
    cout<<maxc<<" "<<maxi<<endl;
    
	return 0;
}
