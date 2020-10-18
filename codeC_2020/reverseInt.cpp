#include <stdio.h>

void enter(int &a);
int conver(int a);

 int main()
 {
 	int a;
 	enter(a);
 	int result;
 	if(a<0){
 		a =-a;
 		result =conver(a);
 		result =-result;
 	}else{
 		result =conver(a);
 	}
 	printf("%d",result);
 	return 0;
 }

void enter(int &a)
{
	scanf("%d",&a);
}

int conver(int a)
{
	double newNum=0;
	int temp =0;
	while(a>0){
		temp =a%10;
		a/=10;
		newNum =newNum*10+temp;
	}
	if(newNum <= 2147483647){
		return int(newNum);
	}
	return 0;
}