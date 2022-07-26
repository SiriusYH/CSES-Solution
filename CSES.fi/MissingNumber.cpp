#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef vector<unsigned long long int> vull;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	SPEED;
	ull n,inp;ull num=0;ull numv=0;
	vull vec;
	cin>>n;
	
	num=(n*(n+1))/2;
	for(ull k=0;k<(n-1);k++)
	{
		cin>>inp;
		vec.emplace_back(inp);
	}
	for(ull l:vec)
	{
		numv+=l;
	}
	ull missing= num-numv;
	cout<<missing<<"\n";
	return 0;
}
