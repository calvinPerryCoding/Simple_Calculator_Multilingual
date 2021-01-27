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

//Class that contains operation methods 
class Operations
{
	//Access specifier that allows methods to be used outside of the class
	// (W3schools, n.d.)
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

//Class that contains input validation methods
class InputValidation
{
	public:
		double numberValidation(double number)
		{
			while (cin.fail())
			{
				cin.clear();
				cin.ignore();
				cin >> number;

				return number;
			}
		}
		void errorMessage()
		{
			cout << "\nERROR: You Must Enter A Number\n";

		}
};

//MAIN PROGRAM
int main()
{
	// Color codes (Rgajrawala, 2012)
	//0 = Black
	//8 = Gray
	//1 = Blue
	//9 = Light Blue
	//2 = Green
	//A = Light Green
	//3 = Aqua
	//B = Light Aqua
	//4 = Red
	//C = Light Red
	//5 = Purple
	//D = Light Purple
	//6 = Yellow
	//E = Light Yellow
	//7 = White
	//F = BringWhite
	// Changes Color to match this image (Kratz, 2017)
	system("color 1F");

	double firstNumber, secondNumber;
	string operation, answerLoop;

	cout << "This is a simple calculator written in c++ made by Calvin Perry\n\n";

	//creates object of classes so main function can access methods in class (W3schools, n.d.)
	Operations operationsObject;
	InputValidation inputValidationObject;

	do
	{
		cout << "\nEnter the first number\n";
		cin >> firstNumber;
		//Validates Input (Lang, 2017)	
		while (cin.fail())
		{
			inputValidationObject.errorMessage();
			firstNumber = inputValidationObject.numberValidation(firstNumber);
		}

		//If user enters invalid response the goto statement returns to here (Tutorialspoint, n.d.)
		//For some rason I could not use the other input validation method with string variables
		operationError:
		cout << "Enter +, -, x, /, or enter 'all' to perform all operations\n";
		cin >> operation;

		cout << "Enter the second number\n";
		cin >> secondNumber;
		//Validates Input (Lang, 2017)
		while (cin.fail())
		{
			inputValidationObject.errorMessage();
			secondNumber = inputValidationObject.numberValidation(secondNumber);
		}
		//If statements for operations
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
			cout << "\nERROR: You did not enter a valid operation\n";
			//Goto statement (Tutorialspoint, n.d.)
			goto operationError;
		}
		
		cout << "\nPress y to run again or press any key to exit\n";
		cin >> answerLoop;
	} 
	while (answerLoop == "y");
}

// References APA 7th Edition


// Kratz, J. (2017, June 26). C++ Logo [Web image]. https://github.com/isocpp/logos. https://raw.githubusercontent.com/isocpp/logos/master/cpp_logo.png

// Lang, J. (2017, April 29). C++ input validation. Stack Overflow. https://stackoverflow.com/questions/43699399/c-input-validation

// Programiz. (n.d.). C++ program to add two numbers. Programiz: Learn to Code for Free. https://www.programiz.com/cpp-programming/examples/add-numbers

// Rgajrawala. (2012, December 18). Background color - C++ forum. cplusplus.com - The C++ Resources Network. https://www.cplusplus.com/forum/beginner/88433/

// Tutorialspoint. (n.d.). C++ Goto statement. RxJS, ggplot2, Python Data Persistence, Caffe2, PyBrain, Python Data Access, H2O, Colab, Theano, Flutter, KNime, Mean.js, Weka, Solidity. https://www.tutorialspoint.com/cplusplus/cpp_goto_statement.htm

// W3schools. (n.d.). C++ class methods.W3Schools Online Web Tutorials. https://www.w3schools.com/cpp/cpp_class_methods.asp

// W3schools. (n.d.). C++ functions. W3Schools Online Web Tutorials. https://www.w3schools.com/cpp/cpp_functions.asp
