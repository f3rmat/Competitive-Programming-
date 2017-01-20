#include <stdio.h>

int main()
{
    int t,n,ans,oldval,newval;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans = 1;
        scanf("%d",&oldval);
        for(int i = 2; i<=n; i++)
        {
            scanf("%d",&newval);
            if(newval<=oldval)
                {
                    ans++;
                    oldval = newval;
                }
        }
        
        printf("%d\n",ans);
        
    }
    return 0;
}
