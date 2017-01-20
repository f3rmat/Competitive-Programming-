#include <stdio.h>
int a[5005];
int main()
{
    int i,j=1,n,p,sum=0;
    scanf("%d",&n);
    for(i = 0; i<=5002;i++)
        a[i] = -1;
        
    for(i = 1; i<=n; i++)
    {
        scanf("%d",&p);
        if(p==0&&j>1)
        {
            a[--j] = -1;
        }
        
        else if(p!=0)
        {
            a[j++]=p;
        }
    }
    
    for(i=1;i<=j-1;i++)
        sum+=a[i];
    
    printf("%d",sum);
    
    return 0;
}
