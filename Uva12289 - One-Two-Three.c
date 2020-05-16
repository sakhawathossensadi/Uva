#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len;
    char str[10];
    scanf("%d",&t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(str);
        len=strlen(str);
        if(len==5)
        {
            printf("3\n");
        }
        /*
        else if((str[0]=='o' || str[0]=='n' || str[0]=='e') || (str[1]=='0' || str[1]=='n' || str[1]=='e') || (str[2]=='o' || str[2]=='n' || str[2]=='e'))
        {
            printf("2\n");
        }
        */
        else if((str[0]=='t' || str[0]=='w' || str[0]=='0') || (str[1]=='t' || str[1]=='w' || str[1]=='0') || (str[2]=='t' || str[2]=='w' || str[2]=='0'))
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
