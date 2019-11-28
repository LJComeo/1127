#include <iostream>
#include <vector>
using namespace std;

int Number(int n)
{
	if (n >= 2)
	{
		int p = n / 3;
		int q = n % 3;
		int count = p + q;
		if (p == 0 && q == 2)
		{
			return 1;
		}
		else
		{
			return p + Number(count);
		}
	}
	return 0;
}

int main1()
{
	vector<int> v;
	int n;
	while (cin >> n)
	{
		if (n)
		{
			v.push_back(n);
		}
		else
		{
			break;
		}
	}
	
	int m = v.size();
	for (int i = 0; i < m; i++)
	{
		int num = 0;
		num += Number(v[i]);
		cout << num << endl;

	}
	return 0;
}