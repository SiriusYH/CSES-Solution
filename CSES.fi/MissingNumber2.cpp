#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef vector<unsigned long long int> vull;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	SPEED;
	ull n,inp;ull num=0;
	cin>>n;
	
	num=(n*(n+1))/2;
	for(ull k=0;k<(n-1);k++)
	{
		cin>>inp;
		num-=inp;
	}
	cout<<num<<"\n";
	return 0;
}
