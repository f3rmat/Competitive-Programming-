#include<bits/stdc++.h>
using namespace std;
vector<int> edge[20005];
bool vis[20005];
int dist[20005];
void bfs(int n, int m)
{

	
	for(int i = 0; i<=20004; i++)
	{
		vis[i] = false;
		dist[i] = 1000000;
	}
	
	vis[n] = true;
	dist[n] = 0;
	
	queue<int> q;
	q.push(n);
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		
		for(auto it = edge[x].begin(); it!=edge[x].end(); it++)
		{
			if(!vis[*it])
			{	
				if(dist[*it]>1+dist[x])
				dist[*it] = 1 + dist[x];
				
				vis[*it] = true;
				q.push(*it);
			}
		}
	}
	
	cout<<dist[m];
}
int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i = 1; i<=10002; i++)
	{
		edge[i].push_back(2*i);
		if(i>1)
		edge[i].push_back(i-1);
	}
	
	bfs(n,m);
	
	return 0;
}
