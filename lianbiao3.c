#include <stdio.h>
#include <stdlib.h>
struct student
{
	int NO;
	struct student* next;
};
int main()
{
	struct student* p1, * p2, * head, * p;
	int n = 0; //����������ʼֵΪ0
	head = NULL;
	p1 = (struct student*)malloc(sizeof(struct student));
	printf("�������һ��ѧ��\n");
	scanf_s("%d", &p1->NO);
	p2 = p1;

	while (p1->NO != 0)
	{
		n++;
		if (n == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;

		printf("������ѧ�ţ�����0��ֹ��\n");
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf_s("%d", &p1->NO);
	};
	p2->next = NULL;

	p = head;
	printf("\nѧ��Ϊ��\n");
	while (p != NULL)
	{
		printf("%d\n", p->NO);
		p = p->next;
	}
	return 0;
}