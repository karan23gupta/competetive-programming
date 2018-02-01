#include <bits/stdc++.h>
#define F(i,p,n) for(LL i=p; i<n; i++)
#define loop(i, n) for(LL i=0; i<n; i++)
#define fast   ios_base::sync_with_stdio(0); cin.tie(0)
#define dd double
#define mem(a, v) memset(a, v, sizeof(a))
typedef long long int LL;
typedef unsigned long long int ULL;
using namespace std;
LL studsal[10001],pos=0,maxa=0;
int main()
{
	//fast;

        LL n,m; cin>>n>>m;
        //LL minsal[n],maxjoboffer[m],offeredsalary[m];
        //LL nocandcomp=0,totsal=0,jobgetter=0;
        char a[n][m];
        //F(i,0,n) minsal[i];
        //F(i,0,m) cin>>offeredsalary[i]>>maxjoboffer[i];
        F(i,0,n)
        {
            //int flag=0;
            F(j,0,m)
            {
                //mem(studsal,0);
                cin>>a[i][j];
            }
        }
        F(i,0,n)
        {
            //int flag=0;
            F(j,0,m)
            {
                //mem(studsal,0);
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
	return 0;
}
