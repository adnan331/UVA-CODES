#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v(n);
        for(int j=0; j<n; j++) cin>>v[j];
        int cont=0;
        for( int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(v[j]>v[k])
                    {
                        cont++;
                        swap(v[j],v[k]);
                    }
            }
        }

        cout<<"Optimal train swapping takes " <<cont<< " swaps.\n";

    }

    return 0;
}
