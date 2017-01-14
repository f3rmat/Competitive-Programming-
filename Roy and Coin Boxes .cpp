#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
vector<int> a;
int n,m;

int getsum(int* bit, int index)
{
    int sum = 0;
    index = index + 1;
    while(index>0)
    {
        sum = sum + bit[index];
        index = index - (index & (-index));
    }
    return sum;
}


void updatebit(int* bit, int val, int index)
{
    index = index + 1;
    while(index<=n)
    {
        bit[index]+=val;
        index = index + (index & (-index));
    }
}

void update(int* bit, int val, int l, int r)
{
    updatebit(bit,val,l);
    updatebit(bit,-val,r+1);
}

int* construct()
{
    int* bit = new int[n+1];
    for(int i =1; i<=n; i++)
    bit[i] = 0;
    
    for(int i = 0; i<n; i++)
    updatebit(bit, 0, i);
    
    return bit;
}


int main() 
{
    scanf("%d %d",&n,&m);
    int l,r;
    
    int* bit = construct();
    
    for(int i = 1; i<=m; i++)
    {
        scanf("%d %d",&l,&r);
        update(bit,1,l-1,r-1);
    }

    int x,q;
    
    for(int i = 0; i<=n-1; i++)
    {
        a.push_back(getsum(bit,i));
    }
    sort(a.begin(), a.end());
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&x);
        cout<<n - (lower_bound(a.begin(),a.end(),x)-a.begin())<<endl;
    }
    
	return 0;
}
