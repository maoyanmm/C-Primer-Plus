#include<iostream>
using namespace std;
#include<string>
int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		if (str1.size() == 0 || str2.size() == 0)
		{
			string str;
			cout << str << endl;
			break;
		}
		if (str1.size() > str2.size())
		{
			swap(str1, str2);
		}
		int max_count = 0;
		int max_i = 0;
		for (int i = 0; i < str1.size(); ++i)
		{
			int tmpi = i;
			int tmp_count = 0;
			for (int j = 0; j < str2.size(); ++j)
			{
				if (str1[tmpi] == str2[j])
				{
					int tmpj = j;
					while (tmpj < str2.size() && str1[tmpi] == str2[tmpj])
					{
						++tmp_count;
						++tmpi;
						++tmpj;
					}
				}
				if (tmp_count > max_count)
				{
					max_count = tmp_count;
					max_i = i;
				}
			}
		}
		string str = str1.substr(max_i, max_i + max_count);
		cout << str << endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
#include<vector>

int Bottle(int k)
{
	int b = k;
	int count = 0;
	while (b >= 3)
	{
		count += b / 3;
		b = b / 3 + b % 3;
	}
	if (2 == b)
	{
		++count;
	}
	return count;
}

int main()
{
	vector<int> v;
	v.resize(10);
	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		cin >> v[i];
		if (v[i] == 0)
		{
			break;
		}
	}
	for (int j = 0; j < i; ++j)
	{
		cout << Bottle(v[j]) << endl;
	}
	return 0;
}