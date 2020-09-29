#include <stdio.h>
#include <conio.h>
#include <math.h>

long total(int n);

int main()
{
	int n;
	scanf("%d",&n);
	long l =total(n);
	printf("%ld\n",l);
	return 0;
}

long total(int n)
{
	long result =0;
	while(n >0){
		result+=n;
		n--;
	}
	return result;
}