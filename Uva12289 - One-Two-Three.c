#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len,j;
    char str[10];
    scanf("%d",&t);
    getchar();
    for(j=0;j<t;j++)
    {
        gets(str);
        len=strlen(str);
        if(len==5)
        {
            printf("3\n");
        }
        else if((str[0]=='t' && str[1]=='w') || (str[0]=='t' && str[2]=='o') || (str[1]=='w'&& str[2]=='o'))
        {
            printf("2\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
