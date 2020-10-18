#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void enter(int &a, int &b, int &c);
void step(int &h, int &m, int &s);
bool check(int h, int m, int s);
void run(int &h, int &m, int &s);

int main()
{
	int h,m,s;
	while (!kbhit()) 
        printf("Press a key\n"); 
    getch();
    return 0; 

	//enter(h,m,s);
	//run(h,m,s);
	//return 0;
}

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
    ; 
}

void run(int &h, int &m, int &s)
{
	int i=100;
	while(i !=0){
		delay(1);
		step(h,m,s);
	}
}

void step(int &h, int &m, int &s)
{
	if(check == 0){
		printf("false time...");
		enter(h,m,s);
	}else{
		if(s==59){
			s =0;
			if(m ==59){
				m =0;
				if(h==23){
					h =0;
				}
			}else{
				m+=1;
			}
		}else{
			s+=1;
		}
	}
	printf("%d %d %d\n",h,m,s );
}

bool check(int h, int m, int s)
{
	if(0<= h < 24){
		if(0 <= m < 60){
			if(0 <= s <60){
				return true;
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else{
		return false;
	}
}

void enter(int &a, int &b, int &c)
{
	scanf("%d%d%d", &a, &b, &c);
}