#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef vector<unsigned long long int> vull;
typedef vector<vector<unsigned long long int>>vvull;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	ull n,x,y,maxgs,mings,res;
	vull xlo,ylo;
	cin >>n;
	for(ull k=0;k<n;k++)
	{
		cin>>x>>y;
		xlo.emplace_back(x);ylo.emplace_back(y);
	}
	for(ull i=0;i<n;i++)
	{
		res=0;
		if(xlo[i]==ylo[i])
		{
			if(xlo[i]==1)
			{
				cout<<1<<endl;
				continue;
			}
			res=(xlo[i]*xlo[i])-((xlo[i])-1);
			cout<<res<<endl;
			continue;
		}
		maxgs=(xlo[i]>ylo[i])? xlo[i]:ylo[i];
		mings=(xlo[i]<ylo[i])? xlo[i]:ylo[i];
		if (maxgs%2==0)
		{
			if(maxgs==xlo[i])
			{
				res= (maxgs*maxgs)-(mings-1);
				cout<<res<<endl;
			}
			else if(maxgs==ylo[i])
			{
				res= ((maxgs-1)*(maxgs-1))+mings;
				cout<<res<<endl;
			}
		}
		else if(maxgs%2==1)
		{
			if(maxgs==xlo[i])
			{
				res= ((maxgs-1)*(maxgs-1))+mings;
				cout<<res<<endl;
			}
			else if(maxgs==ylo[i])
			{
				res= (maxgs*maxgs)-(mings-1);
				cout<<res<<endl;
			}
		}
	}
	return 0;
}
