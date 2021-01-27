using System;

namespace simpleCalcCSharpVS2019
{
    //Class that contains operation methods 
    class Operations
    {
        public double addition(double firstNumberAddition, double secondNumberAddition)
        {
            double answerAddition;

            answerAddition = firstNumberAddition + secondNumberAddition;

            Console.Write("\nThe sum of " + firstNumberAddition + " and " + secondNumberAddition + " is: " + answerAddition + "\n\n");

            return 0;
        }
        public double subtraction(double firstNumberSubtraction, double secondNumberSubtraction)
        {
            double answerSubtraction;

            answerSubtraction = firstNumberSubtraction - secondNumberSubtraction;

            Console.Write("\nThe difference between " + firstNumberSubtraction + " and " + secondNumberSubtraction + " is: " + answerSubtraction + "\n\n");

            return 0;
        }
        public double multiplication(double firstNumberMultiplication, double secondNumberMultiplication)
        {
            double answerMultiplication;

            answerMultiplication = firstNumberMultiplication * secondNumberMultiplication;

            Console.Write("\nThe product of " + firstNumberMultiplication + " and " + secondNumberMultiplication + " is: " + answerMultiplication + "\n\n");

            return 0;
        }
        public double division(double firstNumberDivision, double secondNumberDivision)
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
    //Class that contains input validation methods
    class InputValidation
    {
        public void numberErrorMessage()
        {
            Console.Write("ERROR: Please enter a number\n");
        }
    }
    //Main Program
    class Program
    {
        static void Main(string[] args)
        {
            //Change color (Smith, 2016)
            // Changes Color to match this image (Andres15alvarez, 2018)
            Console.BackgroundColor = ConsoleColor.DarkMagenta;
            Console.ForegroundColor = ConsoleColor.White;
            Console.Clear();

            Console.Write("This is a simple calculator written in c# made by Calvin Perry\n\n");

            //creates object of classes so main function can access methods in class (P.s.w.g, 2015)
            Operations operationsObject = new Operations();
            InputValidation inputValidationObject = new InputValidation();

            //Declare variable outside do while loop to access it later (BillWagner, 2015)
            string answerLoop = null;

            do
            {
                Console.Write("\nEnter the first number\n");
                var firstNumberUnverified = Console.ReadLine();
                //Input validation (Codeeasy, n.d.)
                double firstNumber;
                while (!double.TryParse(firstNumberUnverified, out firstNumber))
                {
                    inputValidationObject.numberErrorMessage();
                    firstNumberUnverified = Console.ReadLine();
                }

                //If user enters invalid response the goto statement returns to here (BillWagner, 2015)
                //For some rason I could not use the other input validation method with string variables
                operationError:
                Console.Write("Enter +, -, x, /, or enter 'all' to perform all operations\n");
                var operation = Console.ReadLine();
                //Input validation (Codeeasy, n.d.)
                while (string.IsNullOrEmpty(operation))
                {
                    inputValidationObject.numberErrorMessage();
                    operation = Console.ReadLine();
                }

                Console.Write("Enter the second number\n");
                var secondNumberUnverified = Console.ReadLine();
                //Input validation (Codeeasy, n.d.)
                double secondNumber;
                while (!double.TryParse(secondNumberUnverified, out secondNumber))
                {
                    inputValidationObject.numberErrorMessage();
                    secondNumberUnverified = Console.ReadLine();
                }

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
                    Console.Write("\nERROR: You did not enter a valid operation\n");
                    //Goto statement (BillWagner, 2015)
                    goto operationError;
                }

                Console.Write("\nPress y to run again or press any key to exit\n");
                answerLoop = Console.ReadLine();

            } 
            while (answerLoop == "y");
        }
    }
}

// References APA 7th Edition


// Andres15alvarez. (2018, February 10). [Web image]. https://commons.wikimedia.org/wiki/File:Csharp_Logo.png. https://upload.wikimedia.org/wikipedia/commons/4/4f/Csharp_Logo.png

// BillWagner. (2015, July 20). Goto statement - C# reference. Developer tools, technical documentation and coding examples | Microsoft Docs. https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/keywords/goto

// BillWagner. (2015, July 20). Compiler error CS0103. Developer tools, technical documentation and coding examples | Microsoft Docs. https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/compiler-messages/cs0103

// Codeeasy. (n.d.). Input validations in C# at C sharp for beginners course Codeasy.Net. 🎓 Learn C# at Advanced Interactive C# Tutorial for Beginners Codeasy.net. https://codeasy.net/lesson/input_validation

// P.s.w.g. (2015, April 25). How to make method call another one in classes? Stack Overflow. https://stackoverflow.com/questions/16226444/how-to-make-method-call-another-one-in-classes

// Smith, S. (2016, January 11). C# Set Console Background and Foreground Colors [Video]. YouTube. https://www.youtube.com/watch?v=01CFumW2FBY

// W3resource. (2020, February 26). C# sharp exercises: Function to calculate the sum of two numbers. w3resource. https://www.w3resource.com/csharp-exercises/function/csharp-function-exercise-3.php