#include <stdio.h>
int a[2][7] = { {1,2,3,4,5,6,7},{8,9,10,11,12,13,14} };
int target;
int main() {
	printf("请输入要查找的数字：\n");
	scanf_s("%d", &target);
	int i ;
	if (a[1][0] > target)    //目标在第一行
	{
		i = 0;
		while (i < 6)
		{
			if(a[0][i]==target)
			{
				printf("已找到，位置在第1行第%d列\n", i + 1);
				break;
			}
			else 
			{ 
				i++;
			}
		}
	}
	else if (a[1][0] < target)  //目标在第二行
	{
		i = 1;
		while (i < 6)
		{
			if (a[1][i] == target)
			{
				printf("已找到，位置在第2行第%d列\n", i + 1);
				break;
			}
			else 
			{
				i++;
			}
		}
	}
	else
	{
		printf("已找到，在2行1列\n");
	}
	return 0;
}