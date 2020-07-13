#include <iostream>
using namespace std;

void Enter(char &Up_or_Down);
int Guess(char &Up_or_Down, int &down, int &up, int &guess);

int main()
{
	char Up_or_Down;
	int down =0;
	int up =1000;
	int guess =500;
	cout <<"-------------Guess Your Mind-----------" << "\n";
	cout <<"'i will guess your number from 1 to 1000'" << "\n";
	cout <<"       Let get Started fun game..." << "\n" << "\n";
	
	cout <<"Enter U if your number is Biger." << "\n";
	cout <<"Enter D if your number is Less." << "\n";
	cout <<"Enter E if your number is Right." << "\n";
	
	int G =Guess(Up_or_Down, down, up, guess);
	cout <<"Love your number is " <<G << ". ALL RIGHT!"<<"\n";	
	return 0;
}

int Guess(char &Up_or_Down, int &down, int &up, int &guess)
{
	cout <<"Guess your number is " << guess <<"\n";
	cout <<"guess from "<<down<< "to" <<up<<"\n";
	Enter(Up_or_Down);
	if(Up_or_Down =='E')
		return guess;
	else if(Up_or_Down =='U'){
		down =guess +1;
		guess +=(up -down)/2+1;
		return(Guess(Up_or_Down, down, up, guess));
	}else if(Up_or_Down =='D'){
		up =guess -1;
		guess -=(up -down)/2+1;
		return (Guess(Up_or_Down, down, up, guess));
	}
}

void Enter(char &Up_or_Down)
{
	cout <<"Let me know your number is Less or Biger. ";
	cin >>Up_or_Down;
}