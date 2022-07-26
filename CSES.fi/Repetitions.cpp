#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef vector<unsigned long long int> vull;
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ep emplace_back;
int main()
{
	SPEED;
	set<int>num;
	string n;
	cin>>n;
	int count=0;
	for(int k=0;k<n.length();k++)
	{
		if(n[k]==n[k+1])
		{
			count++;
		}
		else if(n[k]!=n[k+1])
		{
			count++;
			num.emplace(count);
			count=0;
		}
	}
	auto it=num.end();
	it--;
	cout<< *it<<endl;
	return 0;
}
