#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
#define eb emplace_back
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	SPEED;
	ll n,inp;
	
	cin>>n;
	vll num(n);
	for(ll k=0;k<n;k++)
	{
		cin>> num[k];
	}
	ll counter=0;
	for(ll x=1;x<n;x++)
	{
		if(num[x]<num[x-1])
		{
			counter+= (num[x-1]-num[x]);
			num[x]=num[x-1];
		}
	}
	cout<<counter;
	return 0;
}
