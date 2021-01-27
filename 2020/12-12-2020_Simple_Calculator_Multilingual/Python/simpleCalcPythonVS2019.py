#This is a simple calculator program


class Operations:

    def addition(firstNumberAddition, secondNumberAddition):        
        answerAddition = float(firstNumberAddition) + float(secondNumberAddition)
        print("\nThe sum of ", firstNumberAddition, " and ", secondNumberAddition, " is: ", answerAddition)

    def subtraction(firstNumberSubtraction, secondNumberSubtraction):    
        answerSubtraction = float(firstNumberSubtraction) - float(secondNumberSubtraction)
        print("\nThe difference between ", firstNumberSubtraction, " and ", secondNumberSubtraction, " is: ", answerSubtraction)

    def multiplication(firstNumberMultiplication, secondNumberMultiplication):        
        answerMultiplication = float(firstNumberMultiplication) * float(secondNumberMultiplication)
        print("\nThe product of ", firstNumberMultiplication, " and ", secondNumberMultiplication, " is: ", answerMultiplication)

    def division(firstNumberDivision, secondNumberDivision):
        #cannot divide by 0 check
        if secondNumberDivision == "0":
            print("\nERROR: Cannot divide by 0\n")
        else:
            answerDivision = float(firstNumberDivision) / float(secondNumberDivision)
            print("\nThe dividend of ", firstNumberDivision, " and ", secondNumberDivision, " is: ", answerDivision)

print("This is a simple calculator written in python made by Calvin Perry\n")

#python has no do-while loop
#to simulate the loop I did the following

#while True:
#do stuff here
#if condition 
#break
while True:
    firstNumber = input("\nEnter the first number\n")
    operation = input("Enter +, -, x, /, or enter 'all' to perform all operations\n")
    secondNumber = input("Enter the second number\n")


    if operation == "+":
        Operations.addition(firstNumber, secondNumber)

    elif operation == "-":
        Operations.subtraction(firstNumber, secondNumber)

    elif operation == "x":
        Operations.multiplication(firstNumber, secondNumber)

    elif operation == "/":
        Operations.division(firstNumber, secondNumber)

    elif operation == "all":
        Operations.addition(firstNumber, secondNumber)
        Operations.subtraction(firstNumber, secondNumber)
        Operations.multiplication(firstNumber, secondNumber)
        Operations.division(firstNumber, secondNumber)

    else:
        print("\nERROR: Invalid input")

    answerLoop = input("\nPress y to run again?\n")

    if answerLoop != "y":
        break