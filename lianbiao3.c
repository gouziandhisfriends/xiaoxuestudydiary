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
	int n = 0; //结点个数，初始值为0
	head = NULL;
	p1 = (struct student*)malloc(sizeof(struct student));
	printf("请输入第一个学号\n");
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

		printf("请输入学号，输入0终止：\n");
		p1 = (struct student*)malloc(sizeof(struct student));
		scanf_s("%d", &p1->NO);
	};
	p2->next = NULL;

	p = head;
	printf("\n学号为：\n");
	while (p != NULL)
	{
		printf("%d\n", p->NO);
		p = p->next;
	}
	return 0;
}