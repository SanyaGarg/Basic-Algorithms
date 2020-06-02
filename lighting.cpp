#include<bits/stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main(){

    fastio();
    int t;
    cin >>t;

    while(t--){

        int n,m;
        cin >> n >> m;

        int k =n*m;

        if(k%2==0)cout << k/2  << endl;
        else
        {
            cout << k/2+1 << endl;
        }
    }

}
        