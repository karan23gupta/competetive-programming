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
	    LL n,m; cin>>n>>m;
	    LL minSalary[n],c=0,max=0,totsal=0,pos=0,p[m],stud=0,offeredSalary[m],maxJobOffers[m];
	    char a[n][m];
	    mem(p,0);
	    F(i,0,n) cin>>minSalary[i];
	    F(i,0,m) cin>>offeredSalary[i]>>maxJobOffers[i];
	    F(i,0,n)
	    {
	        F(j,0,m) cin>>a[i][j];
	    }
	    F(i,0,n)
	    {
	        max=0;
	        F(j,0,m)
	        {
	            if(a[i][j]=='1')
                {
                    if((offeredSalary[j]>max)&&(maxJobOffers[j]>0))
                    {
                        max=offeredSalary[j];
                        pos=j;
                        //p[i]=pos;
                    }
                }
	        }
	        if(max>minSalary[i])
            {
                //cout<<max<<"\n";
                stud++;
                totsal+=max;
                maxJobOffers[pos]--;
                p[pos]++;
                //cout<<p[]<<" ";
            }
	    }
	    F(i,0,m) if(p[i]==0) c++;
	    cout<<stud<<" "<<totsal<<" "<<c<<"\n";
	}
	return 0;
}
