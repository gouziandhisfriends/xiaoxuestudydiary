#include <stdio.h>
#include <limits.h>
int x = -789056;
int main()
{
	int rev = 0;
	int temp,rs;
	while (x != 0)
	{
		rs= x % 10;
		x = x / 10;        
		if(rev*10>INT_MAX|| (rev ==INT_MAX/10&&x>7))
		{
			return 0;
		}
		if (rev * 10 < INT_MIN || (rev == INT_MIN /10&& x < -8))
		{
			return 0;
		}
		rev = rev* 10 + rs;
	}
	return rev;
}