#include <iostream>
#include <time.h>
using namespace std;
int checkNum(int,int);
int num1,num2;
int main()
{
	int ran = 0;
		cout << "###Welcome to guessing number game###\n";
		srand(time(NULL));
		int num1 = rand() % 10 + 1;
		do{
			cout << "Guess the number(1 to 10): ";
			cin >> num2;
			ran++;
		    checkNum(num2,num1);
          }while (num1 != num2);
		  cout << "The secret number is " << num1 << endl;
		  cout << "You made " << ran << "guesses" << endl;
}
	

int checkNum(int Num1,int Num2)
{
	if (Num1 < Num2)
	{
		cout << "The secret number is lower\n";
	}
	else if (Num1 > Num2)
	{
		cout << "The secret number is higher\n";
	}
	else
	{
		cout << "Congratulation!\n";
	}
	return(Num1,Num2);
}