#include <iostream>
using namespace std;

int main()
{
	int n, k, s, l;
	cin >> n;
	k = n * 45;
	n -= 1;
	s = n / 2;
	l = n - s;
	n = k + s * 15 + l * 5;
	l = n / 60;
	n -= 60 * l;
	cout << 9 + l << ' ' << n << endl;

	return 0;
}
