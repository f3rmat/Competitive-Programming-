#include<bits/stdc++.h>
#define INT_SIZE 19
using namespace std;

int b[10001][21];
int power2[40];

void solve()
{
    power2[0] = 1;
    for(int i = 1; i<=32; i++)
    power2[i] = 2*power2[i-1];
}


struct TrieNode
{
    int value;  // Only used in leaf nodes
    TrieNode *arr[2];
};
 
// Utility function tp create a Trie node
TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}
 
void insert(TrieNode *root, int pre_xor)
{
    TrieNode *temp = root;
 
    for (int i=INT_SIZE-1; i>=0; i--)
    {
        bool val = pre_xor & (power2[i]);
         if (temp->arr[val] == NULL)
            temp->arr[val] = newNode();
 
        temp = temp->arr[val];
    }
 
    temp->value = pre_xor;
}
 

int query(TrieNode *root, int pre_xor)
{
    TrieNode *temp = root;
    for (int i=INT_SIZE-1; i>=0; i--)
    {
        bool val = pre_xor & (power2[i]);
 
        if (temp->arr[1-val]!=NULL)
            temp = temp->arr[1-val];
 
        else if (temp->arr[val] != NULL)
            temp = temp->arr[val];
    }
    return pre_xor^(temp->value);
}
 
// Returns maximum XOR value of a subarray in arr[0..n-1]
int maxSubarrayXOR( int arr[], int n)
{
    TrieNode *root = newNode();
    insert(root, 0);
 
    int result = 0, pre_xor =0;
 
    for (int i=0; i<n; i++)
    {
        pre_xor = pre_xor^arr[i];
        insert(root, pre_xor);
        
        result = max(result, query(root, pre_xor));
    }
    return result;
}
 
int main()
{   
    int n,m;
    int loc[10001];
    solve();
    
    scanf("%d %d",&n,&m);
    int maxans = 0;
    
    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=m; ++j)
        {
            scanf("%d",&b[i][j]);
            b[i][j] = (b[i][j] ^ b[i][j-1]);
        }
            
    for(int i = 1; i<=m; ++i)
    {
        for(int j = i; j<=m; ++j)
        {
            for(int k = 1; k<=n; ++k)
            {
                loc[k-1] = (b[k][j]^b[k][i-1]);
            }
            maxans = max(maxans,maxSubarrayXOR(loc, n)); 
        }
    }
    printf("%d",maxans);
    
    return 0;
}
