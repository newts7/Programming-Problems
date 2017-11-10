#include <bits/stdc++.h>
using namespace std;
int main()
{

        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        long long n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
                long long x,y;
                cin>>x>>y;
                if(y==x*(x-1)/2)
                        cout<<"YES"<<endl;
                else
                        cout<<"NO"<<endl;
        }
}
