#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    	int n,m;
    	cin>>n>>m;
    	int x1,y1;
    	cin>>x1>>y1;
    	int x2,y2;
    	cin>>x2>>y2;
    	int p;
    	cin>>p;
    	if(x1>x2)
    	{
    		int temp = x1;
    		x1 = x2;
    		x2 = temp;
    	}
    	int row = min(x2-x1,n-x2+x1);
    	if(y1>y2)
    	{
    		int temp = y1;
    		y1 = y2;
    		y2 = temp;
    	}
    	int col = min(y2-y1,m-y2+y1);
    	int sum = (row + col)*p;
    	cout<<sum<<endl;
    	if(sum>1000)
    	cout<<"Let go of the group."<<endl;
    	else
    	cout<<"You saved the group."<<endl;

    	t--;


    }
    return 0;
}
