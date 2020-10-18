#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Enter(int &a, int &b, int &c);
int Solve(int a, int b, int c,double &k,double &j);

int main()
{
	int a, b, c;
	Enter(a,b,c);
	double k,j;
	int result =Solve(a,b,c,k,j);
	if(result ==0){
		printf("no sovle.\n");
	}else if(result ==100){
		printf("any number.\n");
	}else if(result ==1){
		printf("%lf\n",k );
		printf("%lf\n",j );
	}
}

int Solve(int a, int b, int c, double &k, double &j)
{
	int delta =b*b -4*a*c;
	if(delta <0){
		return 0;
	}else if(delta ==0){
		if(a!=0){
			j = k = -1.0*b/(2*a);
			return 1;
		}else{
			return 0;
		}
	}else{
		j = (1.0*(-b +sqrt(delta))/(2*a));
		k = (1.0*(-b -sqrt(delta))/(2*a));
		return 1;
	}
	return 0;
}

/*
int Solve(int a, int b, int c,double &k,double &j)
{
	if(a==0){
		if(b==0){
			if(c ==0){
				return 100;
			}
			else{
				return 0;
			}
		}else{
			k =1.0*c/b;
		}
	}else{
		int delta =b*b-4*a*c;
		if(delta < 0){
			return 0;
		}else if(delta ==0){
			
			j =k =-1.0*b/2*a;
		}else{
			printf("%lf \n",sqrt(delta)-b );
			j =(double(-b +sqrt(delta))/(2*a));
			k =(double(-b -sqrt(delta))/(2*a));
			return 1;
		}
	}
	return 10;
}
*/
void Enter(int &a, int &b, int &c)
{
	scanf("%d%d%d", &a, &b, &c);
}