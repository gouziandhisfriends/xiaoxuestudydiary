#include <stdio.h>
int a[2][7] = { {1,2,3,4,5,6,7},{8,9,10,11,12,13,14} };
int target;
int main() {
	printf("������Ҫ���ҵ����֣�\n");
	scanf_s("%d", &target);
	int i ;
	if (a[1][0] > target)    //Ŀ���ڵ�һ��
	{
		i = 0;
		while (i < 6)
		{
			if(a[0][i]==target)
			{
				printf("���ҵ���λ���ڵ�1�е�%d��\n", i + 1);
				break;
			}
			else 
			{ 
				i++;
			}
		}
	}
	else if (a[1][0] < target)  //Ŀ���ڵڶ���
	{
		i = 1;
		while (i < 6)
		{
			if (a[1][i] == target)
			{
				printf("���ҵ���λ���ڵ�2�е�%d��\n", i + 1);
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
		printf("���ҵ�����2��1��\n");
	}
	return 0;
}