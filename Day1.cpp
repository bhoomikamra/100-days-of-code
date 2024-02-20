#day1

// C++ program for divided a number by 3 without using operator

#include <bits/stdc++.h>
using namespace std;
int add(int x, int y)
{
	int a, b;
	do {
		a = x & y;
		b = x ^ y;
		x = a << 1;
		y = b;
	} while (a);

	return b;
}
int divideby3(int num)
{
	int sum = 0;

	while (num > 3) {
		sum = add(num >> 2, sum);
		num = add(num >> 2, num & 3);
	}

	if (num == 3)
		sum = add(sum, 1);
	return sum;
}
int main(void)
{
	int num = 48;
	cout << "The number divided by 3 is ";
	cout << divideby3(num);

	return 0;
}
