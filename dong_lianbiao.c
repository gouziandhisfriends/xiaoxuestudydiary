#include <stdio.h>
#include <stdlib.h>
//定义结构体
struct grade
{
	long num;
	float grade;
	struct grade* next;
};
int main()
{
	struct grade* p1, * p2, * head, * p;
	p1 = (struct grade*)malloc(sizeof(struct grade));
	head = NULL;
	printf("请输入第一位学生学号及成绩:\n");
	scanf_s("%ld，%f", &p1->num, & p1->grade);


	p2 = p1;
	int n = 0;

	while (p1->num != 0)
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
		p1 = (struct grade * )malloc(sizeof(struct grade));
		printf("请输入学生学号及成绩:\n");
		scanf_s("%ld，%f", &p1->num, & p1->grade);
	}
	p2->next = NULL;
	p = head;
	printf("学号为：\n");
	while (p != NULL)
	{
		printf("%ld,%5.1f\n", p->num, p->grade);
		p = p->next;
	}
	return 0;
}