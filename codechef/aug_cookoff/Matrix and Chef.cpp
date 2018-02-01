#include<bits/stdc++.h>
#define N 200005
typedef long long ll;
using namespace std;

int main()
{
		int n,q,i,j;
		cin>>n>>q;
		int b[n][n];
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>b[i][j];
		for(i=0;i<=q;i++)
		{
			if(i>0)
			{
				int p;
				cin>>p;
				for(j=0;j<n;j++)
				{
					int temp;
					cin>>temp;
					b[p-1][j]=temp;
					b[j][p-1]=temp;
				}
			}
			int ans[n];
			ans[0]=0;
			ans[1]=-b[0][1];
			int x=-1;
			if(ans[1]!=0)
				x=1;
			for(j=2;j<n;j++)
			{
				if(x==-1)
				{
					ans[j]=-b[0][j];
					if(ans[j]!=0)
						x=j;
				}
				else
				{
					if(abs(ans[x]+b[0][j])==b[j][x])
					{
						ans[j]=-b[0][j];
					}
					else
					{
						ans[j]=b[0][j];
					}
				}
			}
			for(j=0;j<n;j++)
			{
				cout<<ans[j]<<" ";
			}
			cout<<""<<endl;
	}
	return 0;
}
