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
	//fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL n; cin>>n;
        LL maxi[n],min[n];
        mem(maxi,0);
        mem(min,10000);
        F(i,0,n)
        {
            LL l; cin>>l;
            LL a[l];
            F(j,0,l)
            {
                cin>>a[j];
                if(maxi[i]<a[j]) maxi[i]=a[j];
                if(min[i]>a[j]) min[i]=a[j];
            }
        }
        LL s=0;
        F(i,1,n)
        {
            s+=((max(abs(maxi[i-1]-min[i]),abs(maxi[i]-min[i-1])))*i);
        }
        cout<<s<<endl;
	}
	return 0;
}
