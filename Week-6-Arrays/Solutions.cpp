#include <iostream>

void inputArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
}

//Task 1
void powerOfTwo(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    //Task 1
    /*int arr[32];
    int n;
    std::cin >> n;

    inputArr(arr, n);
    powerOfTwo(arr, n);
    printArr(arr, n);*/

    //Task 2
    /*int arr[32];
    int number;
    std::cin >> number;

    int sum = 0;
    int counterArr[10] = {};

    while (number != 0)
    {
        int lastDigit = number % 10;
        number /= 10;
        counterArr[lastDigit]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (counterArr[i] == 1) 
        {
            sum += i;
        }
    }

    std::cout << sum;*/

    //Task 3
    /*int arr1[10] = {};
    int arr2[10] = {};
    int arr3[10] = {};

    int size1 = 0;
    int size2 = 0;
    int size3 = 0;

    for (int i = 0; i < 3; i++)
    {
        int arrSize;

        std::cin >> arrSize;

        if (i == 0) 
        {
            size1 = arrSize;
            inputArr(arr1, arrSize);
        } 
        else if (i == 1)
        {
            size2 = arrSize;
            inputArr(arr2, arrSize);
        }
        else
        {
            size3 = arrSize;
            inputArr(arr3, arrSize);
        }
    }

    int newArr[30] = {};
    int size = size1 + size2 + size3;

    int index = 0;
    int i = 0;

    while (size1 > 0 || size2 > 0 || size3 > 0) {
        if (size1)
        {
            newArr[i] = arr1[index];
            size1--;
            i++;
        }
        if (size2)
        {
            newArr[i] = arr2[index];
            size2--;
            i++;
        }
        if (size3)
        {
            newArr[i] = arr3[index];
            size3--;
            i++;
        }

        index++;
    }

    printArr(newArr, size);*/
    
    //Task 4
 /*   int n;
    std::cin >> n;

    int arr1[32] = {};
    int arr2[32] = {};

    inputArr(arr1, n);
    inputArr(arr2, n);

    bool isPermutation = true;
    for (int i = 0; i < n; i++)
    {
        int currentNum = arr1[i];
        int foundIndex = -1;

        for (int j = 0; j < n; j++) 
        {
            int numberFromSecondArr = arr2[j];

            if (currentNum == numberFromSecondArr)
            {
                foundIndex = arr2[j];
            }
        }

        if (foundIndex == -1) {
            isPermutation = false;
            break;
        }
    }

    std::cout << std::boolalpha << isPermutation;*/

    //Task 5
    /*int n;

    std::cin >> n;

    int arr[32] = {};

    inputArr(arr, n);

    int inversions = 0;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                inversions++;
            }
        }
    }

    std::cout << inversions;*/

    //Task 6
    /*char brackets[11];

    std::cin >> brackets;

    int balance = 0;

    bool isValid = true;

    for (int i = 0; brackets[i] != '\0'; i++) 
    {
        if (brackets[i] == '(') 
        {
            balance++;
        }
        else if (brackets[i] == ')') 
        {
            balance--;
            
            if (balance < 0) {
                isValid = false;
                break;
            }
        }
        else {
            isValid = false;
            break;
        }
    }

    if (balance != 0)
    {
        isValid = false;
    }

    std::cout << std::boolalpha << isValid;*/

    //Sorting with array
    /*int arr[100] = {};
    long long number;
    std::cin >> number;

    int counterArr[10] = {};

    while (number != 0)
    {
        int lastDigit = number % 10;
        number /= 10;
        counterArr[lastDigit]++;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < counterArr[i]; j++) {
            std::cout << i;
        }
    }*/

    //str[i] === str[i] != '\0'
}
    
