/***
    Find the cycle of the result
**/
#include<iostream>
using namespace std;
int main()
{	
	int a, b, n;
	while (cin >> a >> b >> n)
	{
		if (n == 0)break;
		if (a % 7 == 0 && b % 7 == 0)
		{
			cout << (n<3) << endl;
			continue;
		}
		int x1 = 1, x2 = 1;
		n = (n + 333) % 336 + 1;
		while (n--)
		{
			int temp = (b*x1 + a*x2) % 7;
			x1 = x2;
			x2 = temp;
		}
		cout << x2 << endl;
	}
	return 0;
}
