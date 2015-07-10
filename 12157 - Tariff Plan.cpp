#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,no=0;
    cin>>t;
    while(t--)
    {
        no++;
        cin>>n;
        int s[n];
        int mile=0,juice=0;
        int i=0;
        while(n--)
        {
            cin>>s[i];
            mile += (s[i]/30)+1;
            juice += (s[i]/60)+1;
            i++;
        }
        mile *= 10;
        juice *= 15;
        if(mile<juice)
            printf("Case %d: Mile %d\n",no,mile);
        else if(juice<mile)
            printf("Case %d: Juice %d\n",no,juice);
        else
            printf("Case %d: Mile Juice %d\n",no,mile);
    }

    return 0;
}
