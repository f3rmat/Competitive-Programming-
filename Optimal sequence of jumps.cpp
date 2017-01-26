#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define mod 1000000007
#define F first
#define S second
typedef long long ll;
using namespace std;
int a[501][501];
int c[501][501];
vector <pair<int, int> > v;
pair<int,int> find_value(int i, int j, int l, int r)
{
	int low = -1;
	int mark1 = -1;
	int mark2 = -1;
	for(int x = i-l;x<=i+r;x++)
	{
		for(int y = j-l;y<=j+r;y++)
		{
			if(x>=1 && y >=1 && x<=500 && y <= 500)
			{
				if(abs(i-x) + abs(j-y) <= r &&  abs(i-x) + abs(j-y) >=l)
				{
					if(c[x][y]>0 && a[x][y] > 0)
					{
						if(a[x][y]>low)
						{
							low = a[x][y];
							mark1 = x;
							mark2 = y;
						}
					}
				}
				
			}
		}
	}
	
	
	
	return make_pair(mark1,mark2);
}

int main() 
{
    int n,k,l,r;
    scanf("%d%d%d%d",&n,&k,&l,&r);
    for(int i = 1; i<=n; i++)
    {
    	for(int j = 1; j<=n; j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    
    for(int i = 1; i<=n; i++)
    {
    	for(int j = 1; j<=n; j++)
    	{
    		scanf("%d",&c[i][j]);
    	}
    }
    
    int count = 1;
    int i = 1; 
    int j = 1;
    //printf("%d\n",k);
    bool flag = true;
    while(count <= k && flag)
    {
    	//printf("%d %d\n",i,j);
    	//if(count)
    	v.push_back(make_pair(i,j));
    	c[i][j]--;
    	count++;
    	pair<int, int> p = find_value(i,j,l,r);
    	if(p.F == -1 && p.S == -1)
    	flag = false;
    	else i = p.F, j = p.S;
    	
    }
    printf("%d\n",count-1);
    for(int i = 0; i<count-1; i++)
    printf("%d %d\n",v[i].F,v[i].S);
	return 0;
}
