#include <stdio.h>
struct test
{
	int num;
	struct test* next;
};
int main()
{
	struct test a1, b1, c1, * head1, * p1;
	struct test a2, b2, c2, * head2, * p2;
	a1.num = 3; 
	b1.num = 0; 
	c1.num = 2; 
	head1 = &a1;
	a1.next = &b1; 
	b1.next = &c1; 
	c1.next = NULL;
	a2.num = 5; 
	b2.num = 7;
	c2.num = 9;
	head2 = &a2; 
	a2.next = &b2; 
	b2.next = &c2; 
	c2.next = NULL;
	p1 = head1;
	p2 = head2;
	do {
		int num1 = p1->num + p2->num;
		printf("%d", num1);
		p1 = p1->next;
		p2 = p2->next;
	} while (p1 != NULL);
	return 0;
}