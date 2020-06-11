#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;
vector<string> name;
vector<int> day;
vector<int> month;
vector<int> year;
int main()
{
    int d,m,y,i,t,k,maximumy=0,minimumy=200000,maximumm=0,minimumm=200000,maximumd=0,minimumd=200000,position1,position2;
    char str[20];
    scanf("%d",&t);
    string s;
    getchar();
    for(k=0; k<t; k++)
    {
        cin>>str;
        cin>>d>>m>>y;
        if(y>maximumy)
        {
            maximumy=y;
        }
        if(y<minimumy)
        {
            minimumy=y;
        }
        name.push_back(str);
        day.push_back(d);
        month.push_back(m);
        year.push_back(y);
    }
    for(k=0; k<t; k++)
    {
        if(year[k]==maximumy)
        {
            if(month[k]>maximumm)
            {
                maximumm=month[k];
            }
        }
        if(year[k]==minimumy)
        {
            if(month[k]<minimumm)
            {
                minimumm=month[k];
            }
        }
    }
    for(k=0; k<t; k++)
    {
        if(year[k]==maximumy && month[k]==maximumm)
        {
            if(day[k]>maximumd)
            {
                maximumd=day[k];
                position1=k;
            }
        }
        if(year[k]==minimumy && month[k]==minimumm)
        {
            if(day[k]<minimumd)
            {
                minimumd=day[k];
                position2=k;
            }
        }
    }
    cout<<name[position1]<<endl;
    cout<<name[position2]<<endl;
    return 0;
}
