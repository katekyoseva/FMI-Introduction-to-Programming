#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

//Task 2
int smallestNumber(int matrix[MAX_ROWS][MAX_COLS], int rows, int columns)
{
    int smallestNum = matrix[0][0];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] < smallestNum)
            {
                smallestNum = matrix[i][j];
            }
        }
    }
    return smallestNum;
}

int main()
{
    //Task 1
    /*int N, M;
    int matrix[MAX_ROWS][MAX_COLS] = {};

    std::cin >> N >> M;
    inputMatrix(matrix, N, M);
    printMatrix(matrix, N, M);*/

    //Task 2
    /*int N, M;
    int matrix[MAX_ROWS][MAX_COLS] = {};

    std::cin >> N >> M;
    inputMatrix(matrix, N, M);

    std::cout << smallestNumber(matrix, N, M);*/

    //Task 3
    /*int N, M;
    int matrix1[MAX_ROWS][MAX_COLS] = {};
    int matrix2[MAX_ROWS][MAX_COLS] = {};

    std::cin >> N >> M;
    inputMatrix(matrix1, N, M);
    inputMatrix(matrix2, N, M);

    int outputMatrix[MAX_ROWS][MAX_COLS] = {};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            outputMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printMatrix(outputMatrix, N, M);*/

    //Task 4
    /*char chessBoard[8][8] = {};

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++) 
        {
            if ((i % 2 == 0 && j % 2 == 1) || (i % 2 == 1 && j % 2 == 0))
            {
                chessBoard[i][j] = '#';
            }
            else
            {
                chessBoard[i][j] = ' ';
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << chessBoard[i][j] << ' ';
        }
        std::cout << '\n';
    }*/

    //#Bonus 1 - Task 4
    /*char chessBoard[9][9] = {};

    char numberCoordinate = '8';
    char letterCoordinate = 'A';

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == 0 && i != 8)
            {
                chessBoard[i][0] = numberCoordinate--;
            }
            else if (i == 8 && j != 0)
            {
                chessBoard[8][j] = letterCoordinate++;
            }
            else if ((i % 2 == 1 && j % 2 == 0) || (i % 2 == 0 && j % 2 == 1) || (i == 8 && j == 0))
            {
                chessBoard[i][j] = ' ';
            }
            else
            {
                chessBoard[i][j] = '#';
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cout << chessBoard[i][j] << ' ';
        }
        std::cout << '\n';
    }*/

    //#Bonus 2 - Task 4
    /*char chessBoard[9][9] = {};

    char numberCoordinate = '8';
    char letterCoordinate = 'A';

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == 0 && i != 8)
            {
                chessBoard[i][0] = numberCoordinate--;
            }
            else if (i == 8 && j != 0)
            {
                chessBoard[8][j] = letterCoordinate++;
            }
            else if ((i % 2 == 1 && j % 2 == 0) || (i % 2 == 0 && j % 2 == 1) || (i == 8 && j == 0))
            {
                chessBoard[i][j] = ' ';
            }
            else
            {
                chessBoard[i][j] = '#';
            }
        }
    }

    char move[3] = {};

    while (move[0] != 'Q')
    {
        std::cin >> move;

        if (move[0] < 'A' || move[0] > 'H' || move[1] < '1' || move[1] > '8' || move[2] != '\0')
        {
            std::cout << "Invalid input!\n";
            continue;
        }

        char letter = move[0];
        char number = move[1];

        int col = letter - 'A' + 1;
        int row = '8' - number;
         
        chessBoard[row][col] = '0';

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                std::cout << chessBoard[i][j] << ' ';
            }
            std::cout << '\n';
        }
    }*/

    //Task 5
    /*int n;
    std::cin >> n;

    int matrix[MAX_ROWS][MAX_COLS];
    int transposedMatrix[MAX_ROWS][MAX_COLS];

    inputMatrix(matrix, n, n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    printMatrix(transposedMatrix, n, n);*/

    //Task 6
    /*int rowsOfFirst, columnsOfFirst;
    int firstMatrix[MAX_ROWS][MAX_COLS];

    std::cin >> rowsOfFirst >> columnsOfFirst;
    inputMatrix(firstMatrix, rowsOfFirst, columnsOfFirst);

    int rowsOfSecond, columnsOfSecond;
    int secondMatrix[MAX_ROWS][MAX_COLS];

    std::cin >> rowsOfSecond >> columnsOfSecond;

    if ((rowsOfSecond != columnsOfFirst) || rowsOfFirst < 0 || rowsOfSecond < 0 || columnsOfFirst < 0 || columnsOfSecond < 0)
    {
        std::cout << "Invalid input!";
        return 0;
    }
     
    inputMatrix(secondMatrix, rowsOfSecond, columnsOfSecond);

    int outputMatrix[MAX_ROWS][MAX_COLS] {};

    for (int i = 0; i < rowsOfFirst; i++)
    {
        for (int j = 0; j < columnsOfSecond; j++)
        {
            for (int k = 0; k < columnsOfFirst; k++) 
            {
                outputMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    printMatrix(outputMatrix, rowsOfFirst, columnsOfSecond);*/
}

