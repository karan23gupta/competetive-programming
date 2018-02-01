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
	LL n; cin>>n;
	LL a[n],sum=0,sum1=0,max=0;
	F(i,0,n)
	{
	    cin>>a[i];
	    if(max<a[i]) max=a[i];
	    sum+=a[i];
	}
	LL b[max+1],sume,sumo;
	b[-1]=0;
	mem(b,0);
	F(i,0,n)
	{
	    b[a[i]]++;
	}
	F(i,0,max+1) cout<<b[i]<<" ";
	cout<<"\n";
	F(i,0,max+1)
	{
	    if(b[i]!=0)
        {
            if((b[i+1]==0)&&(b[i-1]==0))
        {
            sum1+=b[i]*i;
            cout<<"direct"<<sum1<<"\n";
        }
        else
        {
            sume=0,sumo=0;
            LL j=0;
            for(j=i;b[j]!=0;j++)
            {
                if(j%2==0) sume+=b[j]*j;
                else sumo+=b[j]*j;
                //cout<<sume<<" "<<sumo<<"\n";
            }
            if(sume>sumo) sum+=sume;
            else sum+=sumo;
            i=j+1;
                            cout<<sume<<" "<<sumo<<"\n";

        }
        }
	}
	cout<<sum1;
	return 0;
}
