#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,l,u;
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        double temp;

        int c=0,d;
        for(int i=l; i<=u; i++)
        {
            int cont=0;
            temp = pow(i,.5);

            for(int j=1; j<=temp; j++)
            {
                if(i%j==0)
                {
                    cont++;
                    if(j<temp)
                        cont++;
                }
            }
            if(cont>c)
                {
                    d=i;
                    c = cont;
                }

        }
       printf("Between %d and %u, %d has a maximum of %d divisors.\n",l,u,d,c);
    }
    return 0;
}
