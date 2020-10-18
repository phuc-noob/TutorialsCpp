/*#include <stdio.h>

void Enter(int &a, int &b);
int sum(int a, int b);

int main()
{
	int a, b;
	Enter(a, b);
	int result =sum(a,b);
	printf("%d\n",result);
}

int sum(int a, int b)
{
	return a+b;
}

void Enter(int &a, int &b)
{
	scanf("%d%d",&a,&b);
}*/
#include <stdio.h>
#include <stdlib.h>

struct person {
	int age;
	int height;
	int weight;
};

int main()
{
	struct person *who =(struct person *) malloc(sizeof(struct person));
	return 0;	
}