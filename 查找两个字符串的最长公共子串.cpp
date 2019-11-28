#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	string tmp;
	string final;
	int tmpnum = 0;
	int max = 0;
	while (cin >> s1 >> s2)
	{
		int m = s1.length();
		int i = 0;
		int j = 0;
		int n = s2.length();
		if (m < n)
		{
			while (i < m || j < n)
			{
				j = s2.find(s1[i]);
				while (s2[j] == s1[i])
				{
					tmp.push_back(s1[i]);
					tmpnum++;
					i++, j++;
				}
				if (tmpnum > max)
				{
					max = tmpnum;
					final = tmp;
				}

				if (!tmp.empty())
				{
					tmp.clear();
					tmpnum = 0;
				}
				i++;
			}
		}
		else
		{
			while (i < m || j < n)
			{
				while (s2[j] == s1[i])
				{
					tmp.push_back(s2[i]);
					tmpnum++;
					i++, j++;
				}
				if (tmpnum > max)
				{
					max = tmpnum;
					final = tmp;
				}
				
				tmp.clear();
				i++, j++;
			}
		}
		for (auto &i : tmp)
		{
			cout << i;
		}
	}
	return 0;
}