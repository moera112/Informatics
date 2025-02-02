#include <iostream>

using namespace std;

int main()
{
	int a, b, swap;
	cin >> a >> b;
	swap = a;
	a = b;
	b = swap;
	cout << a << ' ' << b << endl;
	return 0;
}
