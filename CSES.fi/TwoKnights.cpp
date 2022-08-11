#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
 
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
	SPEED;
	ull k,g;
	cin>>k;
	for(g=1;g<k+1;g++)
	{
		ull ans= (((g*g)*(g*g-1))/2) - (4*(g-2)*(g-1));
		cout<<ans<<endl;
	}
	return 0;
}
