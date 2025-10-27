#include <iostream>
#include <cmath>

int main()
{
    //Task 1
    /*int n;
    int k;

    std::cin >> n >> k;

    int result = 1;

    for (int i = 1; i <= k; i++)
    {
        result *= n;
    }

    std::cout << result;*/

    //Task 2
    /*int number;

    std::cin >> number;

    int result = 0;

    while (number != 0)
    {
        result += number % 10;

        number /= 10;
    }

    std::cout << result;*/

    //Task 3 
    /*int number;

    std::cin >> number;

    int devisions = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            devisions++;
        }
    }

    if (devisions == 2) {
        std::cout << "Prime";
    }
    else
    {
        std::cout << "Not prime";
    }*/

    //Task 3 - optimised
    /*int number;

    std::cin >> number;

    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }
    else 
    {
        for (int i = 2; i * i <= number && isPrime; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
            }
        }
    }
    
    if(isPrime)
    { 
        std::cout << "Prime";
    }
    else
    {
        std::cout << "Not prime";
    }*/

    //Task 4 
    // (decimal to binary)
    /*int decimalNumber;

    std::cin >> decimalNumber;

    long long binaryNumber = 0;

    for (int i = 0; decimalNumber != 0; i++)
    {
        int remainder = decimalNumber % 2;

        decimalNumber /= 2;

        binaryNumber += remainder * pow(10, i);
    }

    std::cout << binaryNumber;*/

    //(binary to decimal)
    /*long long binaryNumber;

    std::cin >> binaryNumber;

    int decimalNumber = 0;

    for (int i = 0; binaryNumber != 0; i++)
    {
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;

        decimalNumber += lastDigit * pow(2, i);
    }

    std::cout << decimalNumber;*/

    //Task 5
    /*int firstNumber;
    int secondNumber;

    std::cin >> firstNumber >> secondNumber;

    int min = firstNumber < secondNumber ? firstNumber : secondNumber;
    int max = firstNumber > secondNumber ? firstNumber : secondNumber;

    int biggestDivider = 1;

    for (int i = min; i > 1 ; i--)
    {
        if (min % i == 0 && max % i == 0)
        {
            biggestDivider = i;
            break;
        }
    }

    std::cout << biggestDivider;*/

    //Task 5 -> optimised
    /*int a, b;
        std::cin >> a >> b;

        if (b < a)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        while (true)
        {
            int remainder = a % b;
            a = b;

            if (remainder == 0)
            {
                break;
            }
            b = remainder;
        }

        std::cout << b;*/

    //Task 6
    /*int a, b;

    std::cin >> a >> b;

    int sumA = 0;
    int productB = 1;

    while (a != 0)
    {
        sumA += a % 10;

        a /= 10;
    }

    while (b != 0)
    {
        productB *= b % 10;

        b /= 10;
    }

    
    if (sumA == productB)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }*/

    //Task 7
    /*int secretNumber;

    std::cin >> secretNumber;

    bool wasGuessed = false;

    int currentGuess;
    while (!wasGuessed) 
    {
        std::cin >> currentGuess;

        if (currentGuess > secretNumber)
        {
            std::cout << "Go lower" << std::endl;
        }
        else if (currentGuess < secretNumber)
        {
            std::cout << "Go higher" << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the number." << std::endl;
            wasGuessed = true;
        }
    }*/

    //Task 8
    /*int n;

    std::cin >> n;

    int currentNumber;

    bool allOdd = true;
    for (int i = 0; i < n && allOdd; i++)
    {
        std::cin >> currentNumber;

        if (currentNumber % 2 == 0)
        {
            allOdd = false;
        }
    }

    if (allOdd)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }*/

    //Task 9
   /* int number;
    std::cin >> number;

    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0)
    {
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;

        number /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }*/

    //Task 10
    //Fibonacci numbers
    // 0 1 1 2 3 5 8 13 21 -> n3 = n1 + n2
   /* int n;
    std::cin >> n;

    int firstNumber = 0;
    int secondNumber = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            std::cout << firstNumber << " ";
        }
        else if (i == 1)
        {
            std::cout << secondNumber << " ";
        }
        else
        {
            long long nextNumber = firstNumber + secondNumber;
            std::cout << nextNumber << " ";
            firstNumber = secondNumber; 
            secondNumber = nextNumber;
        }
    }*/

    //Tribonacci numbers
    // 0 0 1 1 2 4 7 13 24 -> n4 = n1 + n2 + n3 
    /*int n;
    std::cin >> n;

    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            std::cout << firstNumber << " ";
        }
        else if (i == 1)
        { 
            std::cout << secondNumber << " ";
        }
        else if (i == 2)
        { 
            std::cout << thirdNumber << " ";
        }
        else
        {
            long long nextNumber = firstNumber + secondNumber + thirdNumber;
            std::cout << nextNumber << " ";
            firstNumber = secondNumber;
            secondNumber = thirdNumber;
            thirdNumber = nextNumber;
        }
    }*/
}
