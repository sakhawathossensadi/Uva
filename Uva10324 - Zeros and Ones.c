#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,len,temp,lcount,onecount,zerocount,a,b,casecount=0;
    char str[1000010];
    while(scanf("%s",&str)!=EOF)
    {

        casecount++;
        len=strlen(str);
        if(len==0)
        {
            break;
        }
        scanf("%d",&t);

        printf("Case %d:\n",casecount);
        for(k=0;k<t;k++)
        {
            lcount=0;
            onecount=0;
            zerocount=0;
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                temp=a;
                a=b;
                b=temp;
            }
            for(i=a;i<=b;i++)
            {
                if(str[i]=='0')
                {
                    zerocount++;
                }
                else
                {
                    onecount++;
                }
                lcount++;
            }
            if(lcount==zerocount)
            {
                printf("Yes\n");
            }
            else if(lcount==onecount)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
