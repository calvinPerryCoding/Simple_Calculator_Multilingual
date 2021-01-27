package simplecalcjavanetbeans8.pkg2;
import java.util.Scanner; 
import java.text.DecimalFormat;

class Operations
{
    //Removes .0 from numbers
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

public class SimpleCalcJavaNetBeans82 
{
    public static void main(String[] args) 
    {
        //Creates objects
        Scanner simpleCalculatorObject = new Scanner(System.in); 
        Operations operationsObject = new Operations();
        
        System.out.println("This is a simple calculator written in java made by Calvin Perry");
        
        //variable must be declared outside of do while loop to work
        String answerLoop = null;
        
        do
        {
            System.out.println("\nEnter the First Number");
            double firstNumber = simpleCalculatorObject.nextDouble();          

            System.out.print("Enter +, -, x, /, or enter 'all' to perform all operations\n");
            String operation = simpleCalculatorObject.next();

            System.out.println("Enter the second number");
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
               System.out.println("\nERROR: Invalid input"); 
            }
            
            System.out.println("\nPress y to run again?");
            answerLoop = simpleCalculatorObject.next();
        }
        while (answerLoop.equals("y"));
    }
    
}
