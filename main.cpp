#include <iostream>
#include <stdlib.h> 

using namespace std;

int main(int argc, char *argv[])
{
    float firstNumber, secondNumber, sumOfTwoNumbers;

	if ( argc > 2 ) {
		firstNumber = atof(argv[1]); 
		secondNumber = atof(argv[2]); 
	} else {
		cout << "Calcul de la somme de deux nombres" << endl;
		cout << "----------------------------------" << endl;
		cout << "Le premier nombre : ";
		cin >> firstNumber;
		cout << "Le deuxi�me nombre : ";
		cin >> secondNumber;

	}
	// sum of two numbers in stored in variable sumOfTwoNumbers
	sumOfTwoNumbers = firstNumber + secondNumber;

	// Prints sum 
	if ( argc > 1 ) {
		cout << sumOfTwoNumbers << endl <<endl;
	} else {
		cout << "Le r�sultat de : " << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers << endl <<endl;
	}
    return 0;
  
}
