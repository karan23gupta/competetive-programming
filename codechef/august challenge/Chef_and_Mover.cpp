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
        LL n,d; cin>>n>>d;
        LL a[n+d],b[n],sum=0;
        mem(a,0);
        F(i,0,n)
        {
            cin>>a[i];
            b[i]=a[i];
            sum=sum+a[i];
        }
        //cout<<sum%n<<" "<<sum<<" "<<n<<"\n";
        if(sum%n==0)
        {
            LL x=sum/n,flag=0,ans=0,sarr[d];
            mem(sarr,0);
            F(i,0,d)
            {
                for(LL j=i;j<n;j+=d)
                {
                    sarr[i]+=b[j];
                    LL rem=a[j]-x;
                    a[j+d]+=rem;
                    ans+=abs(rem);
                    //cout<<sarr[i]<<" ";
                }
                if(sarr[i]%x==0)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }

            }

            if(flag==0) cout<<"-1\n";
            else cout<<ans<<"\n";
            //F(i,0,n) cout<<a[i]<<" ";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
