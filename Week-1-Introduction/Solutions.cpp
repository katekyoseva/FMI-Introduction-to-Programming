#include <iostream>

int main()
{
    /*Task 1
    std::cout << "Hello World!\n";
    */

   /* Task 2
   int width, height;

    std::cin >> width >> height;

    int perimeter = 2 * (width + height);
    int area = width * height;

    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area;
    */

    /*Task 3
    //°F = (°C × 9/5) + 32

    double teperatereInCelcius;
    std::cin >> teperatereInCelcius;

    double temperatureInFarenheit = (teperatereInCelcius * (9 / 5)) + 32;

    std::cout << temperatureInFarenheit;
    */

    /*Task 4
    int a = 5;
    int b = 12;

    int c = a;
    a = b;
    b = c;


    std::cout << a << ' ' << b << '\n';
    */

    /*Task 4 - v2 
    int a = 5;
    int b = 12;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << a << ' ' << b << '\n';
    */
  

    /*Task 5
    int number;

    std::cin >> number;

    int lastDigit = number % 10;
    number = number / 10;

    int secondDigit = number % 10;
    number = number / 10;

    int firstDigit = number % 10;

    int sumOfDigits = lastDigit + secondDigit + firstDigit;

    std::cout << sumOfDigits;
    */

    /*Task 5 with loop 
    int number;
    std::cin >> number;

    int sum = 0;

    while (number) 
    {
        int lastDigit = number % 10;
        number = number / 10;

        sum += lastDigit;
    }

    std::cout << sum;
    */
}

