#include "gcd.h"

int gcd(int m, int n)
{
	int x, y, z;
	x = (m > n ? m : n);
	y = (m < n ? m : n);
	z = x % y;
	while(z != 0)
	{
		x = y;
		y = z;
		z = x % y;
	}
	return(y);
}