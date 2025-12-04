#include <iostream>

bool canItBeFormed(char firstArr[], char secondArr[])
{

    for (int i = 0; secondArr[i] != '\0'; i++)
    {
        int index = -1;
        char currentSymbol = secondArr[i];

        for (int j = 0; firstArr[j] != '\0'; j++)
        {
            if (currentSymbol == firstArr[j]) {
                index = j;

                firstArr[j] = '0';
                break;
            }
        }

        if (index == -1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //Task 1
    /*char input[50];
    char symbol;
    int step;

    std::cin >> input;
    std::cin >> symbol >> step;

    if (symbol != 'e' && symbol != 'd')
    {
        std::cout << "Invalid command!";
        return 0;
    }

    if (step < 0 || step > 4)
    {
        std::cout << "Invalid key! Enter a number between 0 and 4!";
        return 0;
    }

    if (symbol == 'e')
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            char currentElement = input[i];

            char newElement = currentElement + step;

            input[i] = newElement;
        }
    }
    else
    {
        for (int i = 0; input[i] != '\0'; i++)
        {
            char currentElement = input[i];

            char newElement = currentElement - step;

            input[i] = newElement;
        }
    }

    std::cout << input;*/


    //Task 2
    /*char firstInput[100];
    char secondInput[100];

    std::cin >> firstInput >> secondInput;

    std::cout << std::boolalpha << canItBeFormed(firstInput, secondInput);*/

    //Task 3
    //int N;

    //std::cin >> N;

    //for (int i = 0; i < N; i++)
    //{
    //    for (int j = 0; j < N; j++)
    //    {
    //        // first and last row
    //        if (i == 0 || i == N - 1)
    //        {
    //            if (j % 2 == 0)
    //            {
    //                std::cout << '*';
    //            }
    //            else
    //            {
    //                std::cout << ' ';
    //            }
    //        }
    //        // every odd row
    //        else if (i % 2 == 0)
    //        {
    //            if (j == 0 || j == N - 1)
    //            {
    //                std::cout << '*';
    //            }
    //            else
    //            {
    //                if (i == N / 2 && j == N / 2)
    //                {
    //                    std::cout << '0';
    //                }
    //                else if (i == j)
    //                {
    //                    std::cout << '+';

    //                }
    //                else if (i + j == N - 1)
    //                {
    //                    std::cout << '-';
    //                }
    //                else
    //                {
    //                    std::cout << ' ';
    //                }
    //            }
    //        }
    //        // every even row
    //        else
    //        {
    //            if (j == 0 || j == N - 1)
    //            {
    //                std::cout << ' ';
    //            }
    //            else
    //            {
    //                if (i == N / 2 && j == N / 2)
    //                {
    //                    std::cout << '0';
    //                }
    //                else if (i == j)
    //                {

    //                    std::cout << '+';
    //                }
    //                else if (i + j == N - 1)
    //                {
    //                    std::cout << '-';
    //                }
    //                else
    //                {
    //                    std::cout << ' ';
    //                }
    //            }
    //        }
    //    }

    //    std::cout << '\n';
    //}
}
