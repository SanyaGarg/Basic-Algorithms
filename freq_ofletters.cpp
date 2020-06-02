#include<bits/stdc++.h>
#define ll  long long
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

 int main(){

    fastio();
    ll int T;
    cin >>T;

    while(T--){

        string s;
        cin >> s;
    //     int mp[26]={0};
    //     for(int i=0;i<s.length();i++){

    //         mp[s[i]-'a']++;
    //     }

    //     for(int i=0;i<26;i++){
    //         if(mp[i]==0)continue;
    //         cout << (char) (i+'a') << " = " << mp[i]<< endl;
    //     }
    // }

         map<char,int> mp;

         for(int i=0;i<s.length();i++){
             mp[s[i]]++;
         }

         for(auto s :mp){
             cout << s.first << " -> "<< s.second << endl;
         }
 }
 }