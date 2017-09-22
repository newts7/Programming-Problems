#include <bits/stdc++.h>
using namespace std;
int main(){
        freopen("input.txt","w",stdout);
        cout<<1000<<endl;
        for(int i=0; i<1000; i++) {
                for(int j=0; j<10; j++) {
                        char c='a'+rand()%26;
                        cout<<c;
                }
                cout<<endl;
        }
        return 0;
}
