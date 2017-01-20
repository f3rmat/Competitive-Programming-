#include <stdio.h>
int a[100005];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        for(int i = 1; i<=n; i++)
            scanf("%d",&a[i]);
        
        k = (k%n);
        
        int low = (n-k+1);
        for(int i = low; i<=n; i++)
        {
            printf("%d ",a[i]);
        }
        for(int i = 1; i<=low-1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
