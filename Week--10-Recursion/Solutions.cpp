#include <iostream>
const int MAX_LENGTH = 1024;

//Task 1
long long factorial(int num)
{
    long long result = 1;

    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}

long long factorialRec(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    
    return num * factorialRec(num - 1);
}

//Task 2
long long pow(int num, int exponent)
{
    long long result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result *= num;
    }
    return result;
}

long long powRec(int num, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }

    return num * powRec(num, exponent - 1);
}

//Task 3
int fibonacci(int num)
{
    if (num == 1)
    {
        return 0;
    }

    if (num == 0)
    {
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

//print fibonacci sequence:
// int n;
//cin >> n;
//
//int a = 0, b = 1;
//
//if (n >= 1)
//cout << a << " ";
//if (n >= 2)
//cout << b << " ";
//
//for (int i = 2; i < n; i++)
//{
//    int c = a + b;
//    cout << c << " ";
//    a = b;
//    b = c;
//}

//Task 4
int sum(long long num)
{
    int sum = 0;

    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int sumRec(long long num)
{
    if (num == 0)
    {
        return 0;
    }

    return sumRec(num / 10) + num % 10;
}

//Task 5
void print(int n)
{
    if (n == 0)
    {
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    print(n - 1);
}

//Task 6
int stringLen(const char* str)
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int stringLengthRec(const char* str)
{
    if (*str == '\0')
    {
        return 0;
    }

    return 1 + stringLengthRec(str + 1);
}

//Task 7
void printReverseRec(int num)
{
    if (num == 0)
        return;

    std::cout << num % 10;
    printReverseRec(num / 10);
}

//Another way
int numLength(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return 1 + numLength(num / 10);
}

int revNum(int num)
{
    if (num < 10)
        return num;

    int numLen = numLength(num);

    return (num % 10) * pow(10, numLen - 1) + revNum(num / 10);
}

//Task 8
bool containsCharRec(const char* str, char symbol)
{
    if (*str == '\0')
        return false;
    if (*str == symbol)
        return true;

    return containsCharRec(str + 1, symbol);
    //return containsCharRec(++str, symbol);
}

//Task 8 - Bonus
bool matchHere(const char* str, const char* pattern)
{
    if (*pattern == '\0')
        return true;

    if (*str == '\0')
        return false;

    if (*str != *pattern)
        return false;

    return matchHere(str + 1, pattern + 1);
}

bool contains(const char* str, const char* pattern)
{
    if (*pattern == '\0')
        return true;

    if (*str == '\0')
        return false;

    if (matchHere(str, pattern))
        return true;

    return contains(str + 1, pattern);
}

//Task 9
bool areEqual(const char* str1, const char* str2)
{
    if (*str1 != *str2)
    {
        return false;
    }
    if (*str1 == '\0')
    {
        return true;
    }

    return areEqual(str1 + 1, str2 + 1);
}

//Task 10
bool isPalindromeHelper(const char* str1, const char* str2)
{
    if (str1 >= str2)
        return true;

    if (*str1 != *str2)
        return false;

    return isPalindromeHelper(str1 + 1, str2 - 1);
}

bool isPalindrome(const char* str)
{
    return isPalindromeHelper(str, str + stringLengthRec(str) - 1);
}

//Seminar Tasks
//Task 0
void printRec(const int arr[], int size)
{
    if (size == 0)
        return;

    printRec(arr, size - 1);

    std::cout << arr[size - 1] << ' ';

}

//Task 1
void inputArrayRec(int arr[], int size)
{
    if (size == 0)
        return;

    inputArrayRec(arr, size - 1);

    std::cin >> arr[size - 1];
}

//Task 2
int findMinRecHelper(int arr[], int size, int min)
{
    if (size == 0)
        return min;

    if (arr[size - 1] < min)
        return findMinRecHelper(arr, size - 1, arr[size - 1]);
    else
        return findMinRecHelper(arr, size - 1, min);
}

int findMin(int arr[], int size)
{
    return findMinRecHelper(arr, size - 1, arr[size - 1]);
}

//Task 3
long long toBinaryRec(int number)
{
    if (number == 0)
        return 0;

    return number % 2 + (10 * toBinaryRec(number / 2));
}

//Task 4
bool isPowerOf2Rec(int number)
{
    if (number == 1)
        return true;

    if (number <= 0 || number % 2 == 1)
        return false;

    return isPowerOf2Rec(number / 2);
}

//Task 5
bool isAscending(int arr[], int size)
{
    if (size == 0 || size == 1)
        return true;

    if (arr[size - 1] >= arr[size - 2])
        return isAscending(arr, size - 1);
    else
        return false;
}

//Task 6
void printStringReverse(const char* str)
{
    if (*str == '\0')
        return;

    printStringReverse(str + 1);

    std::cout << *str;
}

int main()
{
    //Task 1
    /*int num;
    std::cin >> num;

    std::cout << factorial(num) << '\n';
    std::cout << factorialRec(num);*/

    //Task 2
    /*int num, exponent;
    std::cin >> num >> exponent;

    std::cout << pow(num, exponent) << '\n';
    std::cout << powRec(num, exponent);*/

    //Task 3
    /*int n;
    std::cin >> n;

    std::cout << fibonacci(n);*/

    //Task 4
    /*long long number;
    std::cin >> number;

    std::cout << sum(number) << '\n';
     std::cout << sumRec(number);*/

    //Task 5
    /*int rows;
    std::cin >> rows;

    print(rows);     */

    //Task 6
    /*char str[MAX_LENGTH];
    std::cin >> str;

    std::cout << stringLen(str) << '\n';
    std::cout << stringLengthRec(str);*/

    //Task 7
    /*int num;
    std::cin >> num;

    printReverseRec(num);
    std::cout << revNum(num) << '\n';*/

    //Task 8
    /*char str[MAX_LENGTH];
    char symbol;
    std::cin >> str >> symbol;

    std::cout << std::boolalpha << containsCharRec(str, symbol);*/

    //Task 8 - Bonus (if we look for pattern)
    /*char str[MAX_LENGTH];
    char pattern[MAX_LENGTH];

    std::cin >> str >> pattern;
    std::cout << std::boolalpha << contains(str, pattern);*/

    //Task 9
    /*char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];

    std::cin >> str1 >> str2;
    std::cout << std::boolalpha << areEqual(str1, str2);*/

    //Task 10
    /*char str[MAX_LENGTH];
    std::cin >> str;

    std::cout << std::boolalpha << isPalindrome(str);*/

    //Seminar tasks
    //Task 0
    /*int arr[5]{ 1,2,3,4,5 };

    printRec(arr, 5);*/
    //Task 1
    /*int arr[5];
    inputArrayRec(arr, 5);
    printRec(arr, 5);*/

    //Task 2
    /*int arr[5]{ 1,5,-3,2,4 };

    std::cout << findMin(arr, 5);*/

    //Task 3
    /*int num;
    std::cin >> num;
    std::cout << toBinaryRec(num);*/

    //Task 4
    /*int num;
    std::cin >> num;
    std::cout << std::boolalpha << isPowerOf2Rec(num);*/

    //Task 5
    /*int arr1[]{ 1,2,3,4,5 };
    int arr2[]{ 1,2,4,3,5 };

    std::cout << std::boolalpha;

    std::cout << isAscending(arr1, 5) << '\n';
    std::cout << isAscending(arr2, 5) << '\n';*/

    //Task 6
    char str[MAX_LENGTH];
    std::cin >> str;

    printStringReverse(str);
}