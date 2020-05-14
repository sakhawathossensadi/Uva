#include<stdio.h>
int main()
{
    int tvc[200]={1000,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99};
    int curr,des,min,max,result1,result2,position,j;
    while(1)
    {
        result2=0;
        scanf("%d %d",&curr,&des);
        if(curr==-1 && des==-1)
        {
            break;
        }
        min=curr;
        max=des;
        if(curr>des)
        {
            min=des;
            max=curr;
        }
        //printf("min  : %d\n",min);
        //printf("max  : %d\n",max);
        if(min==0)
        {
            result1=max;
            position=100;
        }
        else
        {
            result1=max-min;
            position=100+min;
        }
        for(j=position-1;j>0;j--)
        {
            result2++;
            if(tvc[j]==max)
            {
                break;
            }
        }
        //printf("result1 : %d\n",result1);
        //printf("result2 : %d\n",result2);
        if(result1<result2)
        {
            printf("%d\n",result1);
        }
        else
        {
            printf("%d\n",result2);
        }
    }
    return 0;
}
