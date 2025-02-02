#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
	int a, hours, minutes, second, s = 1;
	scanf("%d", &a);
	a = a % 86400;
	hours = a / 3600;
	minutes = (a % 3600) / 60;
	second = a % 60;
	printf("%d:%02d:%02d", hours, minutes, second);
	return 0;
}
