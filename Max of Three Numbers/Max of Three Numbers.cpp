#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course 4 Solution 13 
// Max of Three Numbers.

void ReadNumbers(int& Num1, int& Num2 , int & Num3)
{
	cout << "Please Enter Num1 " << endl;
	cin >> Num1;

	cout << "Please Enter Num2" << endl;
	cin >> Num2;

	cout << "Please Enter Num3" << endl;
	cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2 , int Num3)
{
	if (Num1 > Num2)
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;

	else
		if (Num2 > Num3)
			return Num2;
		else
			return Num3;
}

void PrintMax(int Max)
{
	cout << "The Max of Three Numbers is : " << Max << endl;
}

int main()
{
	int Num1, Num2 , Num3;
	ReadNumbers(Num1, Num2 , Num3);
	PrintMax(MaxOf3Numbers(Num1, Num2, Num3));

	return 0;
}

