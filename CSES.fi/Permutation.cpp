#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<long long int> vll;
#define eb emplace_back
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	SPEED;
	ll n;
	cin>>n;
	if(n==1)cout<<1<<endl;
	else if(n<4)cout<< "NO SOLUTION"<<endl;
	else if(n>=4)
	{
		for(ll k=2;k<=n;k+=2)cout << k << " ";
		for(ll i=1;i<=n;i+=2)cout << i << " ";
	}
	return 0;
}
