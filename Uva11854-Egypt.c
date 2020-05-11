#include<stdio.h>
int main()
{
    int a,b,c,i,temp,aa,bb,cc,sum;
    while(1)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        if(a<b && a<c)
        {
            if(c<b)
            {
                temp=b;
                b=c;
                c=temp;
            }
        }
        else if(b<a && b<c)
        {
            if(c<a)
            {
                temp=a;
                a=c;
                c=temp;
            }
            if(b<a)
            {
                temp=a;
                a=b;
                b=temp;
            }
        }
        else
        {
            temp=a;
            a=c;
            c=temp;
            if(c<b)
            {
                temp=b;
                b=c;
                c=temp;
            }
        }
        //printf("Case %d: %d %d %d\n",i,a,b,c);
        aa=a*a;
        bb=b*b;
        cc=c*c;
        sum=aa+bb;
        /*
        printf("aa : %d\n",aa);
        printf("bb : %d\n",bb);
        printf("cc : %d\n",cc);
        printf("sum : %d\n",sum);
        */
        if(cc==sum)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }

    }
    return 0;
}

