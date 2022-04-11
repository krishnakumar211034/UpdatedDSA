#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int odd = 0 , even = 0;
	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;
		if(t%2==0){
			even++;
		}
		else
        {
			odd++;
		}
	}
	cout << min(odd , even) << endl;
}