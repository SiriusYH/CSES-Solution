#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
	SPEED;
	ll n;
	cin>>n;
	cout <<n <<" ";
	while(n!=1)
	{
		if(n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else if(n%2==1){
			n=(n*3)+1;
			cout<< n <<" ";
		}
	}
	return 0;
}
