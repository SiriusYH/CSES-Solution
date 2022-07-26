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
	for(int k=0;k<n;k++)
	{
		cin>> inp;
		num.eb(inp);
	}
	ll counter=0;
	ll x=0;
	for(auto it=begin(num);it<end(num);it++)
	{
		if(num[x+1]<num[x])
		{
			counter+= (num[x]-num[x+1]);
			num[x+1]=num[x];
			x++;
		}
		else x++;
	}
	cout<<counter;
	return 0;
}
