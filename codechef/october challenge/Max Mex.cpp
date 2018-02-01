#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
#define MAX 200000
int main()
{
	fast;
	ULL t; cin>>t;
	while(t--)
	{
        LL n,k; cin>>n>>k;
        LL m=0,pos=0,l;
        int a[MAX];
        mem(a,0);
        F(i,0,n)
        {
            cin>>l;
            a[l]=1;
            if(m<l) m=l;
        }
        F(i,0,MAX)
        {
            if(a[i]==1)
            {

            }
            else
            {
                if(k>0)
                {
                    a[i]==1;
                    k--;
                }
                else
                {
                    pos=i;
                    break;
                }
            }
        }
        cout<<pos<<endl;
	}
	return 0;
}
