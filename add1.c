#include <stdio.h>
int nums[] = { 2,5,7,11 };
int target = 9;
int main() {
    int numsSize = sizeof(nums) / sizeof(int);
    static int a[2] = { 0 };
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            int b = nums[i] + nums[j];
            if (b == target)
            {
                a[0] = i;
                a[1] = j;
                return a;
            }
        }
    }
    return 0;
}