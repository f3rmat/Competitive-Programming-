    #include <stdio.h>
    int a[100005];
    int main()
    {
        int q,x,y,j;
        for(int i = 1; i<=100000; i++)
            a[i] = -1;
        
        scanf("%d",&q);
        j = 0;
        for(int i = 1; i<=q; i++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                if(j==0)
                    printf("No Food\n");
                else
                {
                    printf("%d\n",a[j]);
                    j--;
                }
            }
            
            else if(x==2)
            {
                scanf("%d",&y);
                a[++j]=y;
            }
        }
        
        return 0;
    }
