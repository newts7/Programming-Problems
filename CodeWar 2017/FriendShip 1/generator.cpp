#include <bits/stdc++.h>
using namespace std;
int main()
{

        freopen("input.txt","w",stdout);
        cout<<10000<<endl;
        int s=rand()%100;
        for(int i=0; i<10000; i++)
        {

                int x=rand()%100000;
                int y=rand()%100000;
                if(i%s==0)
                        cout<<x<<" "<<x*(x-1)/2<<endl;
                else
                        cout<<x<<" "<<y<<endl;
        }


        return 0;
}
