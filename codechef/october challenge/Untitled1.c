
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
        LL n; cin>>n;
        string s;
        LL max[n],min[n];
        F(i,0,n)
        {
            max[i]=0,min[i]=INT_MAX;
            cin>>s;
            LL l=s.length();
            F(j,0,l)
            {
                if(s[j]>max[i]) max[i]=s[j];
                if(s[j]<min[i]) min[i]=s[j];
            }
        }
        F(i,0,n) cout<<min[i]<<" "<<max[i]<<endl;
	}
	return 0;
}
