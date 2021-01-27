package simplecalcjavanetbeans8.pkg2;
import java.util.Scanner; 
import java.text.DecimalFormat;

//Class that contains operation methods 
class Operations
{
    //Removes .0 from numbers (Soniccool & Jay, 2013)
    DecimalFormat noZeros = new DecimalFormat("0.################");
    
    double addition(double firstNumberAddition, double secondNumberAddition)
    {      
        double answerAddition = firstNumberAddition + secondNumberAddition;
        
        System.out.println("\nThe sum of " + noZeros.format(firstNumberAddition) + " and " + noZeros.format(secondNumberAddition) + " is: " + noZeros.format(answerAddition));
        
        return 0;
    }
    double subtraction(double firstNumberSubtraction, double secondNumberSubtraction)
    {
        double answerSubtraction = firstNumberSubtraction - secondNumberSubtraction;
        
        System.out.println("\nThe difference between " + noZeros.format(firstNumberSubtraction) + " and " + noZeros.format(secondNumberSubtraction) + " is: " + noZeros.format(answerSubtraction));
        
        return 0;
    }
    double multiplication(double firstNumberMultiplication, double secondNumberMultiplication)
    {
        double answerMultiplication = firstNumberMultiplication * secondNumberMultiplication;
        
        System.out.println("\nThe product of " + noZeros.format(firstNumberMultiplication) + " and " + noZeros.format(secondNumberMultiplication) + " is: " + noZeros.format(answerMultiplication));
        
        return 0;
    }
    double division(double firstNumberDivision, double secondNumberDivision)
    {
        double answerDivision = firstNumberDivision / secondNumberDivision;
       
        
        if (secondNumberDivision == 0)
        {
            System.out.println("\nERROR: Cannot divide by 0");
        }
        else
        {
            System.out.println("\nThe dividend of " + noZeros.format(firstNumberDivision) + " and " + noZeros.format(secondNumberDivision) + " is: " + noZeros.format(answerDivision));
        }
        return 0;
    }
}

class InputValidation
{
    public static void numberErrorMessage()
    {
        System.out.println("ERROR: Please enter a number");
    }
}

//Main Program
public class SimpleCalcJavaNetBeans82 
{
    public static void main(String[] args) 
    {
        //creates object of classes so main function can access methods in class (Ant, 2011)
        Scanner simpleCalculatorObject = new Scanner(System.in); 
        Operations operationsObject = new Operations();
        InputValidation inputValidationObject = new InputValidation();
        
        System.out.println("This is a simple calculator written in java made by Calvin Perry");
        
        //variable must be declared outside of do while loop to work (Mendoza, 2014) 
        String answerLoop = null;             
        
        do
        {
            System.out.println("\nEnter the First Number");
            //Input validation (Polygenelubricants & Community♦, 2010)
            while (!simpleCalculatorObject.hasNextDouble())
            {
                inputValidationObject.numberErrorMessage();
                simpleCalculatorObject.next();
            }
            double firstNumber = simpleCalculatorObject.nextDouble();          
            
            //variable must be declared outside of do while loop to work (Mendoza, 2014) 
            String operation = null;
            do
            {
                System.out.print("Enter +, -, x, /, or enter 'all' to perform all operations\n");
                operation = simpleCalculatorObject.next();
            }
            //When using not equal to logic with strings in java use (!"text here".equals(variableNameHere)) (勿绮语, 2011)
            //In java use the and(&&) operator instead of the or(||) operator for this kind of code, it sounds weird but it works
            while(!"+".equals(operation) && !"-".equals(operation) && !"x".equals(operation) && !"/".equals(operation) && !"all".equals(operation));

            System.out.println("Enter the second number");
             //Input validation (Polygenelubricants & Community♦, 2010)
            while (!simpleCalculatorObject.hasNextDouble())
            {
                inputValidationObject.numberErrorMessage();
                simpleCalculatorObject.next();
            }
            double secondNumber = simpleCalculatorObject.nextDouble(); 

            if (operation.equals("+"))
            {
                operationsObject.addition(firstNumber, secondNumber);
            }
            else if (operation.equals("-"))
            {
                operationsObject.subtraction(firstNumber, secondNumber);
            }
            else if (operation.equals("*"))
            {
                operationsObject.multiplication(firstNumber, secondNumber);
            }
            else if (operation.equals("/"))
            {
                operationsObject.division(firstNumber, secondNumber);
            }
            else if (operation.equals("all"))
            {
                operationsObject.addition(firstNumber, secondNumber);
                operationsObject.subtraction(firstNumber, secondNumber);
                operationsObject.multiplication(firstNumber, secondNumber);
                operationsObject.division(firstNumber, secondNumber);
            }
            else
            {
                //System.out.println("\nERROR: Invalid input");
            }
            
            System.out.println("\n\nPress y to run again or press any key to exit");
            answerLoop = simpleCalculatorObject.next();
        }
        while (answerLoop.equals("y"));
    }
    
}

// References APA 7th Edition


// Ant. (2011, January 4). How to call a method in another class in Java? Stack Overflow. https://stackoverflow.com/questions/4593232/how-to-call-a-method-in-another-class-in-java

// Mendoza, L. (2014, December 17). Java cannot find symbol error in do loop. Stack Overflow. https://stackoverflow.com/questions/27530431/java-cannot-find-symbol-error-in-do-loop

// Polygenelubricants, & Community♦. (2010, June 17). Validating input using java.util.Scanner. Stack Overflow. https://stackoverflow.com/questions/3059333/validating-input-using-java-util-scanner

// Soniccool, & Jay. (2013, January 7). JAVA how to remove trailing zeros from a double. Stack Overflow. https://stackoverflow.com/questions/14204905/java-how-to-remove-trailing-zeros-from-a-double

// W3schools. (n.d.). Java how to add two numbers. W3Schools Online Web Tutorials. https://www.w3schools.com/java/java_howto_add_two_numbers.asp

// 勿绮语. (2011, December 13). Java does not equal (!=) not working? Stack Overflow. https://stackoverflow.com/questions/8484668/java-does-not-equal-not-working