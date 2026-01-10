#include <iostream>

const int MAX_ROWS = 256;
const int MAX_COLS = 256;

//Task 4
void sizeOfString(char* input, int& size)
{
	for (int i = 0; *(input + i) != '\0'; i++)
	{
		size++;
	}
}
//Task 2
void spacedOutput(char* input, char* result, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (*(input + i) >= '0' && *(input + i) <= '9')
		{
			*(result + i) = ' ';
		}
		else
		{
			*(result + i) = *(input + i);
		}
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << *(result + i);
	}
}
//Task 3
void operatorPlusEquals(int& a, int& b)
{
	a += b;
}

//Task 5
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

//*& - saves the change to the ptr
void findLargestAvgArr(int*& ptr, int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
	int largestAvgIndex = 0;

	double largestAvg = 0;
	double currAvg = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++) 
		{
			currAvg += matrix[i][j];
		}
		currAvg /= cols;

		if (currAvg > largestAvg)
		{
			largestAvg = currAvg;
			largestAvgIndex = i;
		}
	}

	ptr = *(matrix + largestAvgIndex);
}

int main()
{
    //Task 1
    /*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (size_t i = 0; i < 10; i++)
	{
		std::cout << *(arr + i) << ' ';
	}*/

	//Task 2
	/*char inputString[MAX_ROWS];
	std::cin >> inputString;
	char resultString[MAX_ROWS];
	int size = 0;
	sizeOfString(inputString, size);

	spacedOutput(inputString, resultString, size);*/

	//Task 3
	/*int a = 5;
	int b = 3;

	operatorPlusEquals(a, b);

	std::cout << a;*/

	//Task 4
	/*char inputString[MAX_ROWS];
	std::cin >> inputString;
	int size = 0;
	sizeOfString(inputString, size);
	std::cout << size;*/

	//Task 5
	int rows, cols;
	std::cin >> rows >> cols;

	int matrix[MAX_ROWS][MAX_COLS];
	inputMatrix(matrix, rows, cols);

	int* largestAvgArr = nullptr;

	findLargestAvgArr(largestAvgArr, matrix, rows, cols);

	for (int i = 0; i < cols; i++)
	{
		std::cout << *(largestAvgArr + i) << ' ';
	}
}
