#This is a simple calculator program

class Operations:

    def addition(firstNumberAddition, secondNumberAddition):        
        answerAddition = float(firstNumberAddition) + float(secondNumberAddition)
        #Removes .0 from answer (Nshoo, 2016) 
        if answerAddition % 1 == 0:
            print("\nThe sum of ", firstNumberAddition, " and ", secondNumberAddition, " is: ", int(answerAddition), "\n")
        else:
            print("\nThe sum of ", firstNumberAddition, " and ", secondNumberAddition, " is: ", (answerAddition), "\n")

    def subtraction(firstNumberSubtraction, secondNumberSubtraction):    
        answerSubtraction = float(firstNumberSubtraction) - float(secondNumberSubtraction)
        #Removes .0 from answer (Nshoo, 2016)
        if answerSubtraction % 1 == 0:
            print("\nThe difference between ", firstNumberSubtraction, " and ", secondNumberSubtraction, " is: ", int(answerSubtraction), "\n")
        else:
            print("\nThe difference between ", firstNumberSubtraction, " and ", secondNumberSubtraction, " is: ", answerSubtraction, "\n")

    def multiplication(firstNumberMultiplication, secondNumberMultiplication):        
        answerMultiplication = float(firstNumberMultiplication) * float(secondNumberMultiplication)
        #Removes .0 from answer (Nshoo, 2016)
        if answerMultiplication % 1 == 0:
            print("\nThe product of ", firstNumberMultiplication, " and ", secondNumberMultiplication, " is: ", int(answerMultiplication), "\n")
        else:
            print("\nThe product of ", firstNumberMultiplication, " and ", secondNumberMultiplication, " is: ", answerMultiplication, "\n")

    def division(firstNumberDivision, secondNumberDivision):
        #cannot divide by 0 check
        if secondNumberDivision == "0":
            print("\nERROR: Cannot divide by 0\n")
        else:
            answerDivision = float(firstNumberDivision) / float(secondNumberDivision)
            #Removes .0 from answer (Nshoo, 2016)
            if answerDivision % 1 == 0:
                print("\nThe dividend of ", firstNumberDivision, " and ", secondNumberDivision, " is: ", int(answerDivision), "\n")
            else:
                print("\nThe dividend of ", firstNumberDivision, " and ", secondNumberDivision, " is: ", answerDivision, "\n")

print("This is a simple calculator written in python made by Calvin Perry\n")

#python has no do-while loop (Edpresso Team, 2019)
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

    answerLoop = input("\nPress y to run again or press any key to exit\n")

    if answerLoop != "y":
        break

# References APA 7th Edition


# Edpresso Team. (2019, August 23). How to emulate a do-while loop in Python. Educative: Interactive Courses for Software Developers. https://www.educative.io/edpresso/how-to-emulate-a-do-while-loop-in-python

# Nshoo. (2016, July 9). How can I remove ".0" of float numbers? Stack Overflow. https://stackoverflow.com/questions/38282697/how-can-i-remove-0-of-float-numbers

# Programming with Mosh. (2019, February 18). Python Tutorial - Python for Beginners [Full Course] [Video]. YouTube. https://www.youtube.com/watch?v=_uQrJ0TkZlc
