#include<stdio.h>
int main()
{
    int t,e,f,c,total,i,count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        total=0;
        count=0;
        scanf("%d %d %d",&e,&f,&c);
        total=e+f;
        while(total>=c)
        {
            total=total-c;
            total=total+1;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
