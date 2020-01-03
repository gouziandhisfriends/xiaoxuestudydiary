#include <stdio.h>
int nums[] = { 1,3,5,6,2,4,7,6,3,4,1 };
int numsSize = 11;
int main() {
    int j = 1;
    int temp = 1;
    while (j < numsSize)
    {
        int i = 0;
        while(i<j)
        {      
            if (nums[i] == nums[j])
            {
                goto goon;
            }
            i++;
        } ;
        nums[temp] = nums[j];
        temp++;
        goon: j++;
    };
        return temp;
}