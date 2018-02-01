#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
            LL a[26],b[26],ans=0;
            F(i,0,26) cin>>a[i];
            string s; cin>>s;
            LL l=s.length();
            mem(b,0);
            F(i,0,l)
            {
                b[int(s[i])-97]++;
            }
            F(i,0,26)
            {
                //cout<<b[i];
                if(b[i]==0)
                {
                    ans+=a[i];
                }
            }
            cout<<ans<<endl;
	}
	return 0;
}
