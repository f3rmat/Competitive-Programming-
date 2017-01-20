#include <stdio.h>
long long int a[100005];
int main()
{
    int t,n,count;
    long long int minimumval;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        minimumval = 10000000000;
        count = 0;
        for(int i = 1; i<=n; i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]<minimumval)
                minimumval = a[i];
        }
        for(int i = 1; i<=n; i++)
        {
            if(a[i]==minimumval)
                count++;
        }
        if(count%2==1)
            printf("Lucky\n");
        else
            printf("Unlucky\n");
    }
    return 0;
}
