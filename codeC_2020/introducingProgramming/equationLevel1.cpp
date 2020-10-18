#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Enter(int &a, int &b);
float Solve(int a, int b);
void Export(float a);

int main()
{
	int a,b;
	Enter(a ,b);
	float result =Solve(a ,b);
	Export(result);
	return 0;
}

void Export(float a)
{
	printf("%.1f", a);
}

float Solve(int a, int b)
{
	return float(a)/b;
}	

void Enter(int &a, int &b)
{
	scanf("%d%d",&a ,&b);
}