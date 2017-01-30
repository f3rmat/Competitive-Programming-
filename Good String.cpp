#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int main() 
{
    string s;
    cin>>s;
    int a[26];
    memset(a,0,sizeof(int)*26);
    for(int i = 0; i<=s.length()-1; ++i)
    {
        a[s[i]-97]++;
    }
    int sum = 0;
    for(int i = 0; i<=25; i++)
    {
        if(a[i]>1)
        sum = sum + a[i] - 1;
    }
    printf("%d",sum);
	return 0;
}
