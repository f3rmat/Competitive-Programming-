#include <stdio.h>

int main()
{
    int t,n,flag;
    char a[32][32];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                scanf(" %c",&a[i][j]);   
            }
        }
        
        flag = 1; 
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(a[i][j]=='1'&&(a[i][n-j+1]!='1'||a[n-i+1][j]!='1'))
                {
                    flag = 0;
                    break;
                }
            }
            if(!flag)
            break;
        }
        
        if(!flag)
        printf("NO\n");
        else printf("YES\n");
        
        
    }
    return 0;
}
