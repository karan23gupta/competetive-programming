#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;
ll expo(ll x, ll n){
    ll res = 1;
    while(n>0){
        if(n%2==1){
            res = (res*x)%MOD;
        }
        n/=2;
        x=(x*x)%MOD;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    ll fact[1000001]={0};
    fact[0] = 1;
    for(ll i=1; i<=1000000; i++){
        fact[i] = (fact[i-1]*i)%MOD;
    }
    while(t--){
        ll vow = 0;
        string str;
        cin >> str;
        ll freq[26]={0};
        ll len = str.size();
        for(ll i=0; i<len; i++){
            freq[str[i]-'a']++;
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                vow++;
            }
        }
        ll cons = len-vow;
        if((cons+1) < vow){
            printf("-1\n");
        }else{
            ll fc = fact[cons];
            fc = fc % MOD;
            ll fv = fact[cons+1] * expo(fact[cons+1-vow], MOD-2);
            fv = fv % MOD;
            for(ll i=0; i<=25; i++){
                if(freq[i] == 0){
                    continue;
                }
                if(i==0 || i==4 || i == 8 || i == 14 || i== 20){
                    fv = (fv * expo(fact[freq[i]], MOD-2))%MOD;
                }else{
                    fc = (fc * expo(fact[freq[i]], MOD-2))%MOD;
                }
            }
            ll ans = (fc*fv)%MOD;
            cout << ans << endl;
        }
    }
    return 0;
}
