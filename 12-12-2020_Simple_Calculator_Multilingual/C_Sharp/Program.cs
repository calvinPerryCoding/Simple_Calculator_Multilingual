using System;

namespace simpleCalcCSharpVS2019
{
    //Class that contains all methods 
    class Operations
    {
        public
		    double addition(double firstNumberAddition, double secondNumberAddition)
            {
                double answerAddition;

                answerAddition = firstNumberAddition + secondNumberAddition;

                Console.Write("\nThe sum of " + firstNumberAddition + " and " + secondNumberAddition + " is: " + answerAddition + "\n\n");

                return 0;
            }
        public
            double subtraction(double firstNumberSubtraction, double secondNumberSubtraction)
            {
                double answerSubtraction;

                answerSubtraction = firstNumberSubtraction - secondNumberSubtraction;

                Console.Write("\nThe difference between " + firstNumberSubtraction + " and " + secondNumberSubtraction + " is: " + answerSubtraction + "\n\n");

                return 0;
            }
        public
            double multiplication(double firstNumberMultiplication, double secondNumberMultiplication)
            {
                double answerMultiplication;

                answerMultiplication = firstNumberMultiplication * secondNumberMultiplication;

                Console.Write("\nThe product of " + firstNumberMultiplication + " and " + secondNumberMultiplication + " is: " + answerMultiplication + "\n\n");

                return 0;
            }
        public
            double division(double firstNumberDivision, double secondNumberDivision)
            {
                double answerDivision;

                answerDivision = firstNumberDivision / secondNumberDivision;

                if (secondNumberDivision == 0)
                {
                    Console.Write("\nERROR: Cannot divide by 0");
                }
                else
                {
                    Console.Write("\nThe dividend of " + firstNumberDivision + " and " + secondNumberDivision + " is: " + answerDivision + "\n\n");
                }

                return 0;
            }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("This is a simple calculator written in c# made by Calvin Perry\n\n");

            //creates object of classes so main function can access methods in class
            Operations operationsObject = new Operations();

            //Declare variable outside do while loop to access it later
            string answerLoop = null;

            do
            {
                Console.Write("Enter the first number\n");
                double firstNumber = Convert.ToDouble(Console.ReadLine());

                Console.Write("Enter +, -, x, /, or enter 'all' to perform all operations\n");
                string operation = Console.ReadLine();

                Console.Write("Enter the second number\n");
                double secondNumber = Convert.ToDouble(Console.ReadLine());

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
                    Console.Write("\nERROR: Invalid input");
                }

                Console.Write("\n\nPress y to run again?\n");
                answerLoop = Console.ReadLine();

            } 
            while (answerLoop == "y");

            Console.ReadKey();
        }
    }
}
