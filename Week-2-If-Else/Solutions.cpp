#include <iostream>

int main()
{
    // Task 1
   /* int number;
    std::cin >> number;

    if (number % 2 == 0) 
    {
        std::cout << "Even";
    }
    else
    {
        std::cout << "Odd";
    }*/

    // Task 2
    /*int sideA;
    int sideB;
    int sideC;

    std::cin >> sideA >> sideB >> sideC;

    if ((sideA + sideB) > sideC || (sideB + sideC) > sideA || (sideA + sideC) > sideB)
    {
       std::cout << "Valid triangle!";
    }
    else {
        std::cout << "Invalid triangle!";
    }*/


    //Task 3
    /*int year;

    std::cin >> year;

    if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0)))
    {
        std::cout << "Leap year!";
    }
    else {
        std::cout << "Not a leap year!";
    }*/

    //Task 4
    // lowercase - 97 - 122
    // uppercase - 65 - 90 
    /*char letter;

    std::cin >> letter;

    if ((int)letter >= 65 && (int)letter <= 90) 
    {
        std::cout << "Uppercase";
    } 
    else if ((int)letter >= 97 && (int)letter <= 122)
    {
        std::cout << "Lowercase";
    }*/

    //  Task 4 v2 
    /* char letter;

    std::cin >> letter;

    if (letter >= 'A' && letter <= 'Z')
    {
        std::cout << "Uppercase";
    }
    else if (letter >= 'a' && letter <= 'z')
    {
        std::cout << "Lowercase";
    }*/

   // Task 5
    /*int number;

    std::cin >> number;

    if (number % 3 == 0 && number % 5 == 0) 
    {
        std::cout << "FizzBuzz";
    }
    else if (number % 3 == 0)
    {
        std::cout << "Fizz";
    }
    else if (number % 5 == 0)
    {
        std::cout << "Buzz";
    }
    else
    {
        std::cout << number;
    }*/

    //Task 6
   /* double firstCoordinate;
    double secondCoordinate;
    double radius;

    std::cin >> firstCoordinate >> secondCoordinate >> radius;

    double pointPlacement = sqrt(firstCoordinate * firstCoordinate + secondCoordinate * secondCoordinate);

    if (pointPlacement < radius) {
        std::cout << "Inside";
    }
    else if(pointPlacement == radius)
    {
        std::cout << "On the border";
    }
    else {
        std::cout << "Outside";
    }*/

    //Task 7
    /*char mathOperator;
    double firstNumber;
    double secondNumber;
    
    std::cin >> mathOperator >> firstNumber >> secondNumber;

    if (mathOperator == '+') {
        std::cout << firstNumber + secondNumber;
    }
    else if (mathOperator == '-') {
        std::cout << firstNumber - secondNumber;
    }
    else if (mathOperator == '*') {
        std::cout << firstNumber * secondNumber;
    }
    else if (mathOperator == '/') {
        std::cout << firstNumber / secondNumber;
    }*/

    //Task 7 v2 (with switch-case)
    /*char mathOperator;
    double firstNumber;
    double secondNumber;

    double result = 0;

    std::cin >> mathOperator >> firstNumber >> secondNumber;

    switch (mathOperator) {
        case '+': result = firstNumber + secondNumber;
            break;
        case '-': result = firstNumber - secondNumber;
            break;
        case '*': result = firstNumber * secondNumber;
            break;
        case '/': result = firstNumber / secondNumber;
            break;
    }

    std::cout << result;*/

    // Task 8 
    // point coordinates
    /*int x;
    int y;

    // coordinates of first point of rectangle
    int x1;
    int y1;

    // coordinates of second point of rectangle 
    int x2;
    int y2;

    std::cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    int xMin = x1 < x2 ? x1 : x2;
    int xMax = x1 > x2 ? x1 : x2;

    int yMin = y1 < y2 ? y1 : y2;
    int yMax = y1 > y2 ? y1 : y2;

    if ((x > xMin && x < xMax) && (y > yMin && y < yMax)) {
        std::cout << "Inside";
    }
    else if ((x < xMin || x > xMax) && (y < yMin || y > yMax)) {
        std::cout << "Outside";
    }
    else {
        std::cout << "On the border";
    }
    */
}

