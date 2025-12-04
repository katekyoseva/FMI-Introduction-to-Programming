#include <iostream>
#include <cmath>

void quadraticEquation()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        double x1 = (-b - sqrt(discriminant)) / (2 * a);
        double x2 = (-b + sqrt(discriminant)) / (2 * a);

        std::cout << "There are 2 real solutions: \n";
        std::cout << "First solution : " << x1 << '\n' << "Second solution : " << x2 << '\n';
    }
    else if (discriminant == 0)
    {
        double x = (-b) / (2 * a);
        std::cout << "There is 1 real solution: " << x << '\n';
    }
    else
    {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        std::cout << "There are 2 imaginery solutions: \n";
        std::cout << "x1 = " << realPart << " + " << imagPart << "i\n";
        std::cout << "x2 = " << realPart << " - " << imagPart << "i\n";
    }
}

void cents()
{
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;
}

int triangle()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cout << "Error: The sides cannot form a triangle." << std::endl;
        return 1;
    }

    if (a == b && b == c) {
        std::cout << "The triangle is equilateral." << std::endl;
    }
    else if (a == b || a == c || b == c) {
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else {
        std::cout << "The triangle is scalene." << std::endl;
    }

    double doubleA = a * a;
    double doubleB = b * b;
    double doubleC = c * c;

    if (doubleA + doubleB == doubleC || doubleB + doubleC == doubleA || doubleC + doubleA == doubleB)
    {
        std::cout << "The triangle is right-angled" << std::endl;
    }
    else if (doubleA + doubleB > doubleC && doubleB + doubleC > doubleA && doubleC + doubleA > doubleB)
        std::cout << "The triangle is acute-angled" << std::endl;
    else
    {
        std::cout << "The triangle is obtuse" << std::endl;
    }
}

void leapYear()
{
    std::cout << "Enter year: ";

    int year;

    std::cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0)))
    {
        std::cout << "Leap year";
    }
    else
    {
        std::cout << "Not a leap year";
    }
}

long long reverseNumber(long long number)
{
    long long reversedNum = 0;
    while (number != 0)
    {
        int lastDigit = number % 10;
        number /= 10;

        reversedNum = reversedNum * 10 + lastDigit;
    }

    return reversedNum;
}

long long decimalToBinary()
{
    int decimal;

    std::cin >> decimal;

    long long binary = 0;
    long long binaryBackwards = 0;

    for (int i = 0; decimal != 0; i++)
    {
        int remainder = decimal % 2;
        decimal /= 2;

        binary += remainder * pow(10, i);
    }

    /*std::cout << binary;*/
    return binary;
}

int digitCounter(long long number)
{
    int count = 0;

    while (number != 0)
    {
        number /= 10;
        count++;
    }

    return count;
}

void palindrome()
{
    long long num;
    std::cin >> num;

    long long tempNum = num;
    bool isPalindrome = true;

    int digitsCount = digitCounter(tempNum);

    for (int i = 0; i < digitsCount / 2 && isPalindrome; i++)
    {
        int left = tempNum / (int)pow(10, digitsCount - 1 - i);
        left = left % 10;

        int right = (tempNum / (int)pow(10, i)) % 10;

        if (left != right)
        {
            isPalindrome = false;
        }
    }

    std::cout << std::boolalpha << isPalindrome;
}

void guessNum()
{
    int secretNum = rand();

    bool numFound = false;
    int attempts = 10;

    for (int i = 0; i < attempts && !numFound; i++)
    {
        int input;
        std::cin >> input;

        if (input < secretNum)
        {
            std::cout << "Go higher!";
        }
        else if (secretNum > input)
        {
            std::cout << "Go lower!";
        }
        else
        {
            numFound = true;
        }
    }
    /*do
    {
        int input;
        std::cin >> input;

        if (input < secretNum)
        {
            std::cout << "Go higher!\n";
        }
        else if (input > secretNum)
        {
            std::cout << "Go lower!\n";
        }
        else
        {
            numFound = true;
            std::cout << "Guessed number!";
        }
    } while (!numFound);*/
}

int min(int number)
{
    int minNum = number % 10;
    number /= 10;

    while (number)
    {
        int lastDigit = number % 10;
        number /= 10;
        if (minNum > lastDigit) {
            minNum = lastDigit;
        }
    }

    return minNum;
}

int max(int number)
{
    int maxNum = number % 10;
    number /= 10;

    while (number)
    {
        int lastDigit = number % 10;
        number /= 10;
        if (maxNum < lastDigit) {
            maxNum = lastDigit;
        }
    }

    return maxNum;
}

void repetionInBinary()
{
    long long binary = decimalToBinary();

    int digits = digitCounter(binary);

    long long copyBinary = binary;

    int doublesCounter = 0;

    while (copyBinary >= 10)
    {
        int lastDigit = copyBinary % 10;
        int secondToLastDigit = copyBinary / 10 % 10;

        copyBinary /= 10;
        copyBinary /= 10;

        if (lastDigit == secondToLastDigit && lastDigit == 1)
        {
            doublesCounter++;
        }
    }

    std::cout << doublesCounter;
}

int main()
{
    //TODO -> order in ascending
    /*int input;

    std::cin >> input;

    int newNum = 0;

    int count = digitCounter(input);
    int newNumCount = 0;

    int minNum = min(input);
    int maxNum = max(input);

    while (count != newNumCount)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count - i; j++)
            {
                int currentDigit = input % 10;
                if (currentDigit == minNum + i) 
                {
                    newNum = newNum * 10 + currentDigit;
                    newNumCount++;
                }
            }
        }
    }

    std::cout << newNum;*/
}

