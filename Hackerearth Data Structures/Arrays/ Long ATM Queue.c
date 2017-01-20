#include <stdio.h>
int main()
{
    int n,newval,oldval,count=1;
    scanf("%d %d",&n,&oldval);
    for(int i = 1; i<=n;i++)
    {
        scanf("%d",&newval);
        if(oldval>newval)
            count++;
        oldval = newval;
    }
    printf("%d",count);
    return 0;
}
