#include <stdio.h>
int a[1000005];
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int l,r,x;
    for(int i =1; i<=q; i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            scanf("%d %d",&l,&r);
            if(a[r]==1)
                printf("ODD\n");
            else
                printf("EVEN\n");
        }
        
        if(x==1)
        {
            scanf("%d",&l);
            a[l] = (a[l]^1);
        }
    }
    
    //for(int i = 1; i<=n; i++)
    //printf("%d ",a[i]);
    return 0;
}
