#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,len;
    char str[100];
    scanf("%d",&t);
    getchar();
    for(j=0;j<t;j++)
    {
        while(gets(str)!='\0')
        {
            len=strlen(str);
            if(len==0)
            {
                break;
            }
            for(i=0;i<len;i++)
            {
                if(str[i]=='0')
                {
                    str[i]='O';
                }
                else if(str[i]=='1')
                {
                    str[i]='I';
                }
                else if(str[i]=='2')
                {
                    str[i]='Z';
                }
                else if(str[i]=='3')
                {
                    str[i]='E';
                }
                else if(str[i]=='4')
                {
                    str[i]='A';
                }
                else if(str[i]=='5')
                {
                    str[i]='S';
                }
                else if(str[i]=='6')
                {
                    str[i]='G';
                }
                else if(str[i]=='7')
                {
                    str[i]='T';
                }
                else if(str[i]=='8')
                {
                    str[i]='B';
                }
                else if(str[i]=='9')
                {
                    str[i]='P';
                }
            }
            puts(str);
        }
        if(j!=t-1)
        {
            printf("\n");
        }
    }
    return 0;
}
