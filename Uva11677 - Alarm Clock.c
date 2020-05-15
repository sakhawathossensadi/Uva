
#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,htom,th,h1tom,h2tom,tm;
    while(1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        if(h1==h2 && m1> m2)
        {
            h1=24-h1;
            htom=h1*60;
            h1tom=htom-m1;
            h2tom=h2*60;
            h2tom=h2tom+m2;
            tm=h1tom+h2tom;
        }
        else if((h1<=h2) &&  (m1<=m2 || m1 > m2) )
        {
            th=h2-h1;
            htom=th*60;
            tm=htom+(m2-m1);
        }
        else
        {
            h1=24-h1;
            htom=h1*60;
            h1tom=htom-m1;
            h2tom=h2*60;
            h2tom=h2tom+m2;
            tm=h1tom+h2tom;
        }
        printf("%d\n",tm);
    }
    return 0;
}
