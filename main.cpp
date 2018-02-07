#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    cout << "Calcul de la somme de deux nombres" << endln;
    cout << "----------------------------------" << endl;
    cout << "Le premier nombre : ";
    cin >> firstNumber;
    cout << "Le second nombre : ";
    cin >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum 
    cout << "Le résultat de : " << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers << endl;
    return 0;
  
}
