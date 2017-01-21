#include <stdio.h>
int a[10005];
int main()
{
    int n;
    scanf("%d",&n);
    
    if(n==1)
        {   int x;
            scanf("%d",&x);
            if(x>0)
                printf("NO\n");
            else 
                printf("YES\n");
        }
        
    else
    {   
        int flag = 1;
        for(int i = 1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        
        for(int i = 1; i<=n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                flag = 0;
                break;
            }
            
            else
            {   
                a[i+1]-=a[i];
                a[i]=0;
            }
        }
        /*for(int i = 1; i<=n; i++)
        printf("%d ",a[i]);
        printf("\n%d\n",flag);*/
        
        
        if(!flag || a[n]!=0)
            printf("NO\n");
        else if(flag && a[n]==0)
            printf("YES\n");
        
        
    }
    
    return 0;
}
