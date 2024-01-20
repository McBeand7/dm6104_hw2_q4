/*Write a program that reads from the user two positive integers, and prints the result of when we add, subtract, multiply, divide,
div and mod them*/

#include<iostream>
using namespace std;

int main()
{
	int Num_1 = 14;
	int Num_2 = 4;
	int sum;

	cout << "Please enter two positive integers, separated by a space:\n";
	cin >> Num_1 >> Num_2;
	cout << "\n";

	sum = Num_1 + Num_2;
	cout << Num_1 << " + " << Num_2 << " = " << sum <<endl;

	sum = Num_1 - Num_2;
	cout << Num_1 << " - " << Num_2 << " = " << sum <<endl;
	
	sum = Num_1 * Num_2;
	cout << Num_1 << " * " << Num_2 << " = " << sum <<endl;

	sum = Num_1 / Num_2;
	cout << Num_1 << " / " << Num_2 << " = " << sum << endl;

	sum = Num_1 % Num_2;
	cout << Num_1 << " % " << Num_2 << " = " << sum << endl;

	cout << "\n";

	return 0;
}