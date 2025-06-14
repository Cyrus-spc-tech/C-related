using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Hello, World!");
        int age = 23;
        double price = 99.99;
        char grade = 'A';
        string name = "Tanish";
        bool isStudent = true;

        Console.WriteLine($"Hello, {name}! You are {age} years old, with a price of {price:C} and a grade of {grade}. Is student: {isStudent}");
        Console.WriteLine("Press any key to exit...");

        // user input
        Console.Write("Enter your real age:");
        string input = Console.ReadLine();
        if (input == null)
        {
            Console.WriteLine("No input provided.");
            return;
        }
        // Convert user input to integer safely
        if (int.TryParse(input, out int realAge))
        {
            if (realAge < 0)
            {
                Console.WriteLine("Age cannot be negative. Please enter a valid age.");
            }
            else if (realAge < 18)
            {
                Console.WriteLine("You are a minor.");
            }
            else if (realAge < 65)
            {
                Console.WriteLine("You are an adult.");
            }
            else
            {
                Console.WriteLine("You are a senior citizen.");
            }cg
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter a valid number.");
        }
        // calculator 
        Console.WriteLine("Enter two numbers for addition:");
        Console.Write("Enter first number: ");
        string firstInput = Console.ReadLine();
        Console.Write("Enter second number: ");
        string secondInput = Console.ReadLine();
        if (firstInput == null || secondInput == null)
        {
            Console.WriteLine("No input provided.");
            return;
        }
        if (double.TryParse(firstInput, out double firstNumber) && double.TryParse(secondInput, out double secondNumber))
        {
            double sum = firstNumber + secondNumber;
            Console.WriteLine($"The sum of {firstNumber} and {secondNumber} is {sum}.");
        }
        else
        {
            Console.WriteLine("Invalid input. Please enter valid numbers.");
        }

    }
}
