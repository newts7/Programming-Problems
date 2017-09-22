#include <bits/stdc++.h>
using namespace std;
int main(){

        //  freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        int n;
        cin>>n;
        vector<string>v(n);
        for(int i=0; i<n; i++) {
                cin>>v[i];
        }

        int res=0;
        for(int i=1; i<n; i++) {
                for(int j=i; j>0&&v[j-1]>v[j]; j--) {
                        res++;
                }
        }
        cout<<res;

        return 0;
}
