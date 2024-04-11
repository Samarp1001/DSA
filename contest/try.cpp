#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long

#define mod 1000000007
int main()
{

	int t = 1;
	cin >> t;
	while (t--)
	{
		int n1, sam;
		cin >> n1 >> sam;
		if (n1 == 1)
		{
			cout << -1 << endl;
		}
		else if (n1 % 2 == 0)
		{
			if (sam % 2 == 0)
			{
				if (sam >= n1)
				{
					int hel = sam / n1, sam1 = sam % n1;
					for (int i = 0; i < n1; i++)
					{
						if (sam1)
						{
							cout << hel + 1 << " ";
							sam1--;
						}
						else
						{
							cout << hel << " ";
						}
					}
					cout << endl;
				}
				else
				{
					cout << -1 << endl;
				}
			}
			else
			{
				cout << -1 << endl;
			}
		}
		else
		{
			if (sam % 2)
			{
				cout << -1 << endl;
			}
			else
			{
				if (n1 > 3)
				{
					if (sam >= (n1 + 3))
					{
						cout << 1 << " " << 2 << " " << 3 << " ";
						n1 -= 3;
						sam -= 6;
						int hel = sam / n1, sam1 = sam % n1;
						for (int i = 0; i < n1; i++)
						{
							if (sam1)
							{
								cout << hel + 1 << " ";
								sam1--;
							}
							else
							{
								cout << hel << " ";
							}
						}
						cout << endl;
					}
					else
					{
						cout << -1 << endl;
					}
				}
				else
				{
					if (sam < 6 || sam == (1 << ((int)log2(sam))))
					{
						cout << -1 << endl;
					}
					else
					{
						cout << sam / 2 << " " << (1 << ((int)log2(sam / 2))) << " " << (sam / 2) - (1 << ((int)log2(sam / 2))) << endl;
					}
				}
			}
		}
	}
	return 0;
}
