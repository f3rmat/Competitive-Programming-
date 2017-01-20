#include <stdio.h>
int a[100005];
int main()
{
    int n,x,sum=0;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
        scanf("%d",&a[i]);
    
    for(int i = 1; i<=n; i++)
    {
        scanf("%d",&x);
        printf("%d ",x+a[i]);
    }
    
    
    
    return 0;
}
