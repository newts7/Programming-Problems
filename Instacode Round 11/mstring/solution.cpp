#include <bits/stdc++.h>
using namespace std;

void lcs(string a,string b){
        vector<vector< long long > >dp(a.size()+1,vector<long long>(b.size()+1));
        int n=a.size();
        int m=b.size();
        for(int i=1; i<=n; i++) {
                for(int j=1; j<=m; j++) {
                        if(a[i-1]==b[j-1])
                                dp[i][j]=dp[i-1][j-1]+1;
                        else
                                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
        }
        cout<<dp[n][m];
}

int main(){
        //    freopen("input.txt","r",stdin);
        //  freopen("output.txt","w",stdout);
        string a,b;
        cin>>a>>b;
        lcs(a,b);

        return 0;
}
