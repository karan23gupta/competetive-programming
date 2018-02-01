#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
read(T);
while(T--)
{
	int i;
	read(n,m);
	for(i=1;i<=m;i++){
    read(t[i],l[i],r[i]);
}
        memset(diff1,0,sizeof(diff1));
        memset(diff2,0,sizeof(diff2));
        diff2[m]=1;
        for(i=m;i>0;i--)
        {
            diff2[i]+=diff2[i+1];
            diff2[i]=diff2[i]%MOD;
            if(t[i]==2)
            {
                diff2[l[i]-1]-=diff2[i];
                diff2[r[i]]+=diff2[i];

            }
            else
            {
                diff1[l[i]]+=diff2[i];
                diff1[r[i]+1]-=diff2[i];

            }

        }
        for(i=1;i<=n;i++)
        {
			diff1[i]+=diff1[i-1];
            ans=(diff1[i])%MOD;
            ans=(ans+MOD)%MOD;
            cout<<ans<<" ";
        }
        cout<<endl;
	}
    return 0;
}
