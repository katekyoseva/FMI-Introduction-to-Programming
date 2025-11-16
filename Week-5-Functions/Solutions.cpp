#include <iostream>

//Task 1
int powerOfNumber(int num, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= num;
    }
    return result;
}

//Task 2
void printText()
{
    std::cout << "Hello, world!";
}

//Task 3
bool isUppercase(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z');
}

bool isLowerCase(char symbol)
{
    return (symbol >= 'a' && symbol <= 'z');
}

//Task 4
int doMathOperation(int firstNum, int secondNum, char operation)
{
    int result = 0;
    switch (operation)
    {
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        case '/':
            result = firstNum / secondNum;
            break;
    }

    return result;
}

//Task 5
int average(int firstNum, int secondNum, int thirdNum)
{
    return ((firstNum + secondNum + thirdNum) / 3);
}

//Task 6
int digitsCount(int number)
{
    int counter = 0;

    while (number)
    {
        number /= 10;
        counter++;
    }

    return counter;
}

//Task 7
int concat(int firstNum, int secondNum)
{
    int lenghtOfSecondNum = digitsCount(secondNum);
    
    return firstNum * powerOfNumber(10, lenghtOfSecondNum) + secondNum;
}

//Task 8
int divide(int firstNum, int secondNum)
{
    return firstNum / secondNum;
}

double divide(double firstNum, double secondNum)
{
    return firstNum / secondNum;
}

//Task 9
void printDivision(int a, int b)
{
    std::cout << a / b << ' ' << a % b << '/' << b << '\n';
}

//Task 10
bool isInClosedInterval(int a, int b, int num)
{
    return num >= a && num <= b;
}

bool isIntervalValid(int a, int b)
{
    return a < b;
}

int main()
{
    //Task 1
    /*int a, b;

    std::cin >> a >> b;

    std::cout << powerOfNumber(a, b);*/

    //Task 2 
    /*printText();*/

    //Task 3
    /*char symbol;

    std::cin >> symbol;

    std::cout << std::boolalpha << isUppercase(symbol) << std::endl;
    std::cout << std::boolalpha << isLowerCase(symbol) << std::endl;*/
    
    //Task 4
    /*int firstNum, secondNum;
    char operation;

    std::cin >> firstNum >> secondNum >> operation;

    std::cout << doMathOperation(firstNum, secondNum, operation);*/
    
    //Task 5
    /*int firstNum, secondNum, thirdNum;

    std::cin >> firstNum >> secondNum >> thirdNum;

    std::cout << average(firstNum, secondNum, thirdNum);*/

    //Task 6
    /*int number;

    std::cin >> number;

    std::cout << digitsCount(number);*/


    //Taks 7 
    /*int firstNum, secondNum;

    std::cin >> firstNum >> secondNum;

    std::cout << concat(firstNum, secondNum);*/

    //Task 8
    /*std::cout << divide(5.5, 2.0) << std::endl;
    std::cout << divide(5.0, 2.0) << std::endl;
    //std::cout << divide(5.0, 2) << std::endl; // error 
    std::cout << divide(5, 2) << std::endl;*/

    //Task 9
    /*int a, b;
    std::cin >> a >> b;

    printDivision(a, b);*/

    //Task 10
    /*int x, a, b, c, d, e, f;
    std::cin >> x >> a >> b >> c >> d >> e >> f;

    if (!isIntervalValid(a, b) || !isIntervalValid(c, d) || !isIntervalValid(e, f))
    {
        std::cout << "Invalid intervals!";
        return -1;
    }

    bool result = ((isInClosedInterval(a, b, x) || isInClosedInterval(c, d, x)) && !isInClosedInterval(e, f, x));
   
    std::cout << std::boolalpha << result;
    return 0;*/
}
