#include <stdio.h>
int main() {
    int nums[] = { 0,1,2,2,3,0,4,2 };
    int numsSize = sizeof(nums) / sizeof(int);
    int val = 0;
    int i;
    int j = 0;
    for (i = 0; i < numsSize ; i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    int len = j + 1;
    for (j = 0; j < len-1; j++)
    {
        printf("%d", nums[j]);
    }
    return 0;
}