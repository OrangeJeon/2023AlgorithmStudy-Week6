#include<iostream>
using namespace std;

int main()
{
	int X, Y, total = 0;
	cin >> X >> Y;

	if (X < Y)
		total = X + Y + (X/ 10);
	else
		total = X + Y + (Y / 10);

	printf("%d", total);
}