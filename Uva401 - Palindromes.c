#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,l,j,count,flag,c,mc,nc,f;
    char str[25],com[25],p[25],notpalindrome[25],m[25],mirrorpalindrome[25],le,midmirrorpalindrome[25],midnotpalindrome[25];
    while(scanf("%s",&str)!=EOF)
    {
        flag=0;
        len=strlen(str);
        count=0;
        l=len-1;
        while(l>=0)
        {
            p[count]=str[l];
            l--;
            count++;
        }
        p[count]='\0';
        c=0;
        for(i=0; i<len; i++)
        {
            if(str[i]==p[i])
            {
                c++;
            }
        }
        if(c==len)
        {
            flag=1;
        }
        f=0;
        for(i=0; i<len; i++)
        {
            if(str[i]=='A' || str[i]=='H' || str[i]=='I' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='Y' || str[i]=='8' || str[i]=='0' || str[i]=='1')
            {
                f++;
            }
        }
        if(flag==1 && f==len)
        {
            printf("%s -- is a mirrored palindrome.\n",str);
            printf("\n");
        }
        else if(flag==1)
        {
            printf("%s -- is a regular palindrome.\n",str);
            printf("\n");
        }
        if(flag==0)
        {
            for(i=0; i<len; i++)
            {
                le=str[i];
                if(le=='3')
                {
                    le='*';
                }
                else if(le=='2')
                {
                    le='*';
                }
                else if(le=='5')
                {
                    le='*';
                }
                else if(le=='H')
                {
                    le='*';
                }
                else if(le=='I')
                {
                    le='*';
                }
                else if(le=='L')
                {
                    le='*';
                }
                else if(le=='J')
                {
                    le='*';
                }
                else if(le=='M')
                {
                    le='*';
                }
                else if(le=='O')
                {
                    le='*';
                }
                else if(le=='T')
                {
                    le='*';
                }
                else if(le=='U')
                {
                    le='*';
                }
                else if(le=='V')
                {
                    le='*';
                }
                else if(le=='W')
                {
                    le='*';
                }
                else if(le=='X')
                {
                    le='*';
                }
                else if(le=='Y')
                {
                    le='*';
                }
                else if(le=='1')
                {
                    le='*';
                }
                else if(le=='8')
                {
                    le='*';
                }

                else if(le=='E')
                {
                    le='*';
                }

                else if(le=='S')
                {
                    le='*';
                }
                else if(le=='Z')
                {
                    le='*';
                }
                else if(le=='A')
                {
                    le='*';
                }
                midnotpalindrome[i]=le;
            }
            midnotpalindrome[len]='\0';
            count=0;
            l=len-1;
            while(l>=0)
            {
                notpalindrome[count]=midnotpalindrome[l];
                l--;
                count++;
            }
            notpalindrome[count]='\0';
            nc=0;
            for(i=0; i<len; i++)
            {
                if(midnotpalindrome[i]==notpalindrome[i])
                {
                    nc++;
                }
            }
            if(nc!=len)
            {
                printf("%s -- is not a palindrome.\n",str);
                printf("\n");
            }
            if(nc==len)
            {
                printf("%s -- is a mirrored string.\n",str);
                printf("\n");
            }
        }
    }
    return 0;
}
