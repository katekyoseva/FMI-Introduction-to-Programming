#include <iostream>

void printEmptyLines(int emptyLines)
{
    for (int i = 0; i < emptyLines; i++)
    {
        std::cout << '\n';
    }
}

void printFigure(int spacesAroundOutput, int index, int n, int outputTextWidth)
{
    for (int j = 0; j < spacesAroundOutput; j++)
    {
        std::cout << ' ';
    }

    for (int j = 1; j <= index; j++)
    {
        std::cout << j;
    }

    if (index == n) {
        for (int j = 0; j < n; j++)
        {
            std::cout << '-';
        }
    }
    else
    {
        for (int j = 0; j < outputTextWidth - 2 * index; j++)
        {
            std::cout << ' ';
        }
    }

    for (int j = index; j >= 1; j--)
    {
        std::cout << j;
    }
}

int main()
{
    int n;

    std::cin >> n;

    const int CONSOLE_WIDTH = 80;
    const int CONSOLE_HEIGHT = 25;

    int outputTextWidth = 3 * n;
    int outputTextLines = 2 * n - 1;

    int emptyLines = (CONSOLE_HEIGHT - outputTextLines) / 2;
    int spacesAroundOutput = (CONSOLE_WIDTH - outputTextWidth) / 2;

    printEmptyLines(emptyLines);

    for (int i = 1; i <= n; i++)
    {
        printFigure(spacesAroundOutput, i, n, outputTextWidth);
        std::cout << "\n";
    }

    for (int i = n - 1; i >= 1; i--)
    {
        printFigure(spacesAroundOutput, i, n, outputTextWidth);
        std::cout << "\n";
    }
    
    printEmptyLines(emptyLines);

    return 0;
}

