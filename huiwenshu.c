#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#define true 1
#define false 0
int x = 158969851;
bool main() {
    if (x < 0)
    {
        return false;
    }
    else
    {
        int temp = x;
        int rev = 0;
        while (x != 0)
        {
            int a = x % 10;
            x /= 10;
            if (rev  > INT_MAX/10 || rev  == INT_MAX/10 && a> 7)
            {
                return false;
            }
             rev = rev * 10 + a;
        }
        if (temp == rev)
        {
            return true;
        }
        return false;
    }
}