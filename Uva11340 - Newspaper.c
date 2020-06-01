#include<stdio.h>
#include<string.h>
int main()
{
    int t,k,m,len,v,z,i,j,n,value[200];
    char ch;
    double price;
    char str[11000],letter[200];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        //int value[k];
        //char letter[k];
        for(i=1;i<=k;i++)
        {
            scanf("%c %d",&letter[i],&value[i]);
            //getchar();
        }
        /*
        for(n=1;n<=k;n++)
        {
            printf("Letter : %c    value : %d\n",letter[n],value[n]);
        }
        */
        price=0;
        scanf("%d",&m);
        getchar();
        for(z=0;z<m;z++)
        {
            gets(str);
            len=strlen(str);
            for(i=1;i<=k;i++)
            {
                for(j=0;j<len;j++)
                {
                    if(str[j]==letter[i])
                    {
                        price=price+value[i];
                    }
                }
            }
            getchar();
        }
        printf("%.2lf$\n",price/100);
    }
    return 0;
}
