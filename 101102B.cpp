#include <bits/stdc++.h>
using namespace std;
map <int,int> f;

bool solve(int target, int length_rem)
{	
    
    if(target>=0&&length_rem>=0&&2*length_rem<=target&&7*length_rem>=target)
    return true;
    
    return false;
}


int main() {
	int t;
	scanf("%d",&t);
	f[0] = 6;
	f[1] = 2;
	f[2] = 5;
	f[3] = 5;
	f[4] = 4;
	f[5] = 5;
	f[6] = 6;
	f[7] = 3;
	f[8] = 7;
	f[9] = 6;
	while(t--)
	{
		int n;
		scanf("%d ",&n);
		char x;
		int sum = 0;
		for(int i = 1; i<=n; i++)
		{
			scanf("%c",&x);
			sum+=f[x-48];
		}
		//cout<<sum<<" "<<n<<endl;
		
		for(int i = 1; i<=n; i++)
		{
		    for(int j = 9; j>=0; j--)
		    {
		        if(solve(sum-f[j],n-i))
		        {
		            printf("%d",j);
		            sum = sum - f[j];
		            break;
		        }
		    }
		}
		
		printf("\n");
	}
	return 0;
}
