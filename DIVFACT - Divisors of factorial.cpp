#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

vector<long long> allPrimes;
 
void sieve(int n)
{
   vector<bool> prime(n+1, true);
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++)
        if (prime[p])
            allPrimes.push_back(p);
}
 
long long factorialDivisors(long long n)
{

    long long result = 1;
 
    for (int i=0; i < allPrimes.size(); i++)
    {
        long long p = allPrimes[i];
 
        long long exp = 0;
        while (p <= n)
        {
            exp = exp + (n/p);
            p = p*allPrimes[i];
        }
 
        result = (result*(exp+1))%mod;
    }
 
    return result;
}
 
int main()
{	
	sieve(50005);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout << factorialDivisors(n)<<"\n";
	}
	
    return 0;
}
