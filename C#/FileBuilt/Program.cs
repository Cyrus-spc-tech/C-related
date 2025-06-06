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

    }
}

