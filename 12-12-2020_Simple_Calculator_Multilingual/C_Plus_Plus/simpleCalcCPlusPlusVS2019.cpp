/*If you get the error
* e0266 "cout or cin is ambiguous"
* try removing the line
* "using namespace std;"
* then replace the first cout with
* std::cout
* then hit ctrl-z until 
* "using namespace std;" 
* reappears
* it sounds crazy but it worked
* for me
*/ 

//This is a simple calculator program

//Required for program to run
#include <iostream>
#include <string>

using namespace std;

//Class that contains all methods 
class Operations
{
	//Access specifier that allows methods to be used outside of the class
	public:
		double addition(double firstNumberAddition, double secondNumberAddition)
		{
			double answerAddition;

			answerAddition = firstNumberAddition + secondNumberAddition;

			cout << "\nThe sum of " << firstNumberAddition << " and " << secondNumberAddition << " is: " << answerAddition << "\n\n";

			return 0;
		}
		double subtraction(double firstNumberSubtraction, double secondNumberSubtraction)
		{
			double answerSubtraction;

			answerSubtraction = firstNumberSubtraction - secondNumberSubtraction;

			cout << "\nThe difference between " << firstNumberSubtraction << " and " << secondNumberSubtraction << " is: " << answerSubtraction << "\n\n";

			return 0;
		}
		double multiplication(double firstNumberMultiplication, double secondNumberMultiplication)
		{
			double answerMultiplication;

			answerMultiplication = firstNumberMultiplication * secondNumberMultiplication;

			cout << "\nThe product of " << firstNumberMultiplication << " and " << secondNumberMultiplication << " is: " << answerMultiplication << "\n\n";

			return 0;
		}
		double division(double firstNumberDivision, double secondNumberDivision)
		{
			double answerDivision;

			answerDivision = firstNumberDivision / secondNumberDivision;

			if (secondNumberDivision == 0)
			{
				cout << "\nERROR: Cannot divide by 0\n";
			}
			else
			{
				cout << "\nThe dividend of " << firstNumberDivision << " and " << secondNumberDivision << " is: " << answerDivision << "\n\n";
			}

			return 0;
		}
};


int main()
{
	double firstNumber, secondNumber;
	string operation, answerLoop;

	cout << "This is a simple calculator written in c++ made by Calvin Perry\n\n";

	//creates object of classes so main function can access methods in class
	Operations operationsObject;

	do
	{
		cout << "\nEnter the first number\n";
		cin >> firstNumber;
		cout << "Enter +, -, x, /, or enter 'all' to perform all operations\n";
		cin >> operation;
		cout << "Enter the second number\n";
		cin >> secondNumber;

		if (operation == "+")
		{
			operationsObject.addition(firstNumber, secondNumber);
		}
		else if (operation == "-")
		{
			operationsObject.subtraction(firstNumber, secondNumber);
		}
		else if (operation == "x")
		{
			operationsObject.multiplication(firstNumber, secondNumber);
		}
		else if (operation == "/")
		{
			operationsObject.division(firstNumber, secondNumber);
		}
		else if (operation == "all")
		{
			operationsObject.addition(firstNumber, secondNumber);
			operationsObject.subtraction(firstNumber, secondNumber);
			operationsObject.multiplication(firstNumber, secondNumber);
			operationsObject.division(firstNumber, secondNumber);
		}
		else
		{
			cout << "\nERROR: Invalid input";
		}

		cout << "\nPress y to run again?\n";
		cin >> answerLoop;
	} 
	while (answerLoop == "y");

	system("pause");
}