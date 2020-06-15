#include<stdio.h>
int main()
{
    int t,n,p,k,i,j,count,firstholiday,secondholiday,firstholidaycount;
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d",&n);
        int day[n];
        for(i=1; i<=n; i++)
        {
            day[i]=0;
        }
        scanf("%d",&p);
        int party[p];
        for(i=1; i<=p; i++)
        {
            scanf("%d",&party[i]);
        }
        for(i=1; i<=p; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(j%party[i]==0)
                {
                    day[j]=1;
                }
            }
        }
        firstholidaycount=0;
        firstholiday=0;
        secondholiday=0;
        count=0;
        for(i=1; i<=n; i++)
        {
            firstholiday++;
            secondholiday++;
            if(firstholidaycount==0 && firstholiday==6)
            {
                firstholidaycount++;
                firstholiday=0;
                continue;
            }
            else if(firstholiday==7)
            {
                firstholiday=0;
                continue;
            }
            else if(secondholiday==7)
            {
                secondholiday=0;
                continue;
            }
            else if(day[i]==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
