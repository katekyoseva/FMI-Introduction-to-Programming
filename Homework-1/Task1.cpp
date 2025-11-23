#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    if (n < 2 || n > 9)
    {
        std::cout << "Please enter a number between 2 and 9 (inclusively)!";
        return 0;
    }

    const int CONSOLE_WIDTH = 80;
    const int CONSOLE_HEIGHT = 25;

    int outputTextWidth = 3 * n;
    int outputTextLines = 2 * n - 1;

    int emptyLines = (CONSOLE_HEIGHT - outputTextLines) / 2;
    int spacesAroundOutput = (CONSOLE_WIDTH - outputTextWidth) / 2;

    for (int i = 0; i < emptyLines; i++)
    {
        std::cout << '\n';
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < spacesAroundOutput; j++)
        {
            std::cout << ' ';
        }

        for (int k = 1; k <= i; k++)
        { 
            std::cout << k;
        }

        if (i == n) {
            for (int k = 0; k < n; k++)
            {
                std::cout << '-';
            }
        }
        else  
        {
            for (int k = 0; k < outputTextWidth - 2 * i; k++)
            {
                std::cout << ' ';
            }    
        }

        for (int k = i; k >= 1; k--)
        {
            std::cout << k;
        }
            std::cout << "\n";
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < spacesAroundOutput; j++)
        {
            std::cout << ' ';
        }

        for (int k = 1; k <= i; k++)
        {
            std::cout << k;
        }

        for (int k = 0; k < outputTextWidth - 2 * i; k++)
        {
                std::cout << ' ';
        }

        for (int k = i; k >= 1; k--)
        {
            std::cout << k;
        }

        std::cout << "\n";
    }
    
    for (int i = 0; i < emptyLines; i++)
    {
        std::cout << '\n';
    }

    return 0;
}

