#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795
int main()
{
    int t,i;
    double w,r,area,ra,l;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lf",&l);
        w=(6*l)/10;
        r=(2*l)/10;
        area=l*w;
        ra=PI*(r*r);
        printf("%.2lf %.2lf\n",ra,(area-ra));
    }
    return 0;
}
