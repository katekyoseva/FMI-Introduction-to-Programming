#include <iostream>

const int MAX_CHARS = 1024;
const int MAX_LENGTH = 100;
const int ASCII_SYMBOLS = 128;

// Base Tasks 
unsigned stringLength(const char* str)
{
    unsigned length = 0;
    for (unsigned i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

// modify char array
void stringCopy(char* destination, const char* source)
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

// modify char array
void stringConcat(char* destination, const char* source)
{
    unsigned length = stringLength(destination);

    unsigned i;
    for (i = 0; source[i] != '\0'; i++)
    {
        destination[length + i] = source[i];
    }
    destination[length + i] = '\0';
}

//Task 4 - Seminar
char* toString(int number)
{
    int size = 0;
    int copy = number;

    if (copy >= 0 && copy <= 9)
    {
        size = 1;
    }
    else 
    {
        for (int i = 0; copy != 0; i++)
        {
            copy /= 10;
            size++;
        }
    }

    char* array = new char[size + 1] {};
    for (int i = size - 1; i >= 0; i--)
    {
        array[i] = '0' + (number % 10);
        number /= 10;
    }

    return array;
}

//Printing
void printArray(char* arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        std::cout << arr[i];
    }
}

void printArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
}

//Task 1
int* fillArray(int num)
{
    int* array = new int[num];

    for (int i = 0; i < num; i++)
    {
        array[i] = i + 1;
    }
    return array;
}

//Task 2
int stringSize(char* arr, char symbol)
{
    int size = 0;
    for (int i = 0; arr[i] != symbol; i++)
    {
        size++;
    }
    return size;
}

char* renameFile(char* oldName, char* newName)
{
    int oldNameLength = stringSize(oldName, '.');
    int formatLength = stringLength(newName);
    int newNameLength = stringLength(newName);
    
    int fileNameSize = newNameLength + formatLength;

    char* renamedFile = new char[fileNameSize + 1] {};

    for (int i = 0; i < newNameLength; i++)
    {
        renamedFile[i] = newName[i];
    }
    for (int i = newNameLength; i < fileNameSize; i++)
    {
        renamedFile[i] = oldName[oldNameLength++];
    }

    return renamedFile;
}
//Task 2 - modified string
int lastDotIndex(char* old)
{
    int length = stringLength(old);
    for (int i = length - 1; i >= 0; i--)
    {
        if (old[i] == '.')
        {
            return i;
        }
    }
}
int extensionLength(char* file, int startIndex)
{
    int length = 0;
    for (int i = startIndex; file[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

void renameOldFile(char*& oldName, char* newName)
{
    int lastDot = lastDotIndex(oldName);
    int extensionLen= extensionLength(oldName, lastDot);
    char* extension = new char[extensionLen + 1] {};
    stringCopy(extension, oldName + lastDot);

    int newNameLength = stringLength(newName);
    int fileNameSize = newNameLength + extensionLen;

    char* renamedFile = new char[fileNameSize + 1] {};
    stringCopy(renamedFile, newName);
    stringCopy(renamedFile + newNameLength, extension);
    
    delete[] extension;
    delete[] oldName;

    oldName = renamedFile;
}

//Task 3
char* concat(char* firstStr, char* secondStr)
{
    int firstSize = stringLength(firstStr);
    int secondSize = stringLength(secondStr);

    int newSize = firstSize + secondSize;
    char* concatenatedStr = new char[newSize + 1] {};

    stringConcat(concatenatedStr, firstStr);
    stringConcat(concatenatedStr + firstSize, secondStr);

    return concatenatedStr;
}

//Task 4
int* charOcc(char* str)
{
    int* counter = new int[ASCII_SYMBOLS] {};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char asciiCode = str[i];
        counter[asciiCode]++;
    }
    return counter;
}

void printResult(int* counter)
{
    for (int i = 0; i < ASCII_SYMBOLS; i++)
    {
        if (counter[i] > 0)
        {
            std::cout << (char)i << " - " << counter[i] << '\n';
        }
    }
}

//Task 5
int** getMatrix(int rows, int cols)
{
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols] {};
    }
    return matrix;
}

void fillMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
//Task 7
bool isValidSymbol(char symbol)
{
    return (
        (symbol >= 'a') && (symbol <= 'z')
        || (symbol >= 'A') && (symbol <= 'Z')
        || (symbol >= '1') && (symbol <= '9')
        );
}
char* rewriteArray(char* str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isValidSymbol)
        {
            counter++;
        }
    }
    char* result = new char[counter + 1] {};
    int resultPosition = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isValidSymbol)
        {
            if (resultPosition < counter)
            {
                result[resultPosition++] = str[i];
            }
        }
    }

    return result;
}

//Task 8
void pushBack(int*& arr, int& size, int& cap, int num)
{
    if (size == cap)
    {
        cap = cap * 2 > 0 ? cap * 2 : 1;
        int* newArr = new int[cap] {};
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

    arr[size++] = num;
}

//Task 9
void popBack(int*& arr, int& size, int& cap)
{
    if (size == 0)
        return;
    arr[size - 1] = 0;
    size--;

    if (size * 4 <= cap)
    {
        cap = cap / 2 > 0 ? cap / 2 : 1;
        int* newArr = new int[cap] {};
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
}

//Task 10
void componentsCounter(char* dir, int& count)
{
    for (int i = 0; dir[i] != '\0'; i++)
    {
        if (dir[i] == '/') {
            count++;
        }
    }
    count++;
}
void stringCopy(char* destination, const char* source, char symbol)
{
    int i;
    for (i = 0; source[i] != symbol; i++)
    {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

char** separateDirectories(char* dir, int& count)
{
    int position = 0;
    char** dirs = new char* [count] {};

    for (int i = 0; i < count; i++)
    {
        int length = 0;
        if (i != count - 1)
        {
            length = stringSize(dir + position, '/');
            dirs[i] = new char[length + 1] {};
            stringCopy(dirs[i], dir + position, '/');
        }
        else
        {
            length = stringLength(dir + position);
            dirs[i] = new char[length + 1] {};
            stringCopy(dirs[i], dir + position);
        }
        position += length + 1;
    }

    return dirs;
}

void printDirs(char** matrix, int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; matrix[i][j] != '\0'; j++)
        {
            std::cout << matrix[i][j];
        }
        std::cout << '\n';
    }
}

int main()
{
    //Seminar - Task 3
    //int rows, cols;

    //std::cin >> rows >> cols;

    //int** matrix = new int* [rows] {}; //create an array of pointers (same as number of rows of matrix)

    //for (int i = 0; i < rows; i++)
    //{
    //    matrix[i] = new int[cols] {}; //create each row with "n"-elements (columns), in this case each one is 0
    //}

    //printMatrix(matrix, rows, cols);

    ////delete matrix
    //for (int i = 0; i < rows; i++)
    //{
    //    delete[] matrix[i];
    //}

    //delete[] matrix;

    //Seminar - Task 4
    /*int num;
    std::cin >> num;
    char* string = toString(num);
    printArray(string);

    delete[] string;*/

    //Task 1
    /*int n;
    std::cin >> n;

    int* arr = fillArray(n);
    printArray(arr, n);

    delete[] arr;*/

    //Task 2
    //char* file = new char[MAX_CHARS] {};
    //char oldName[MAX_CHARS];
    //char newName[MAX_CHARS];

    //std::cin >> oldName >> newName;

    ////new string
    //char* fileName = renameFile(oldName, newName);
    //printArray(fileName);
    //delete[] fileName;
    
    ////modified array
    //stringCopy(file, oldName);
    //renameOldFile(file, newName);
    //printArray(file);

    //delete[] file;

    //Task 3
    /*char firstString[MAX_CHARS];
    char secondString[MAX_CHARS];

    std::cin >> firstString >> secondString;

    char* concatenatedString = concat(firstString, secondString);

    printArray(concatenatedString);
    delete[] concatenatedString;*/

    //Task 4
    //char string[MAX_CHARS];
    //std::cin >> string;

    //int* counter = charOcc(string);
    //
    //printResult(counter);
    //delete[] counter;

    //Task 5
    /*int rows, cols;

    std::cin >> rows >> cols;

    int** matrix = getMatrix(rows, cols);
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);*/

    //Task 6
    //for (int i = 0; i < rows; i++)
    //{
    //    delete[] matrix[i];
    //}

    //delete[] matrix;

    //Task 7
    /*char str[MAX_LENGTH];
    std::cin >> str;

    char* result = rewriteArray(str);
    printArray(result);

    delete[] result;*/
    
    //Task 8
   /* int capacity = 2;
    int size = 0;
    int* arr = new int[capacity];

    pushBack(arr, size, capacity, 5);
    pushBack(arr, size, capacity, 15);
    pushBack(arr, size, capacity, 25);

    printArray(arr, size);

    delete[] arr;*/

    //Task 9
    /*int capacity = 8;
    int size = 6;
    int* arr = new int[capacity] {1, 2, 3, 4, 5, 6, 0, 0};

    popBack(arr, size, capacity);
    popBack(arr, size, capacity);
    popBack(arr, size, capacity);
    popBack(arr, size, capacity);

    printArray(arr, size);

    delete[] arr;*/

    //Task 10
    /*char str[MAX_LENGTH];
    std::cin >> str;

    int componentsCount = 0;
    componentsCounter(str, componentsCount);
    char** dirs = separateDirectories(str, componentsCount);
    
    printDirs(dirs, componentsCount);

    std::cout << '\n';

    std::cout << "Total components: " << componentsCount;

    for (int i = 0; i < componentsCount; i++)
    {
         delete[] dirs[i];
    }

    delete[] dirs;*/

    //Task 12
    /*int n;
    std::cin >> n;

    if (n < 4 || n % 2 != 0)
        return 0;

    int** matrix = getMatrix(n, n);
    fillMatrix(matrix, n, n);

    int subMatrixSize = n / 2;

    int** matrix1 = getMatrix(subMatrixSize, subMatrixSize);
    int** matrix2 = getMatrix(subMatrixSize, subMatrixSize);
    int** matrix3 = getMatrix(subMatrixSize, subMatrixSize);
    int** matrix4 = getMatrix(subMatrixSize, subMatrixSize);

    for (int i = 0; i < subMatrixSize; i++)
    {
        for (int j = 0; j < subMatrixSize; j++)
        {
            matrix1[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < subMatrixSize; i++)
    {
        for (int j = 0; j < subMatrixSize; j++)
        {
            matrix2[i][j] = matrix[i][j + subMatrixSize];
        }
    }

    for (int i = 0; i < subMatrixSize; i++)
    {
        for (int j = 0; j < subMatrixSize; j++)
        {
            matrix3[i][j] = matrix[i + subMatrixSize][j];
        }
    }

    for (int i = 0; i < subMatrixSize; i++)
    {
        for (int j = 0; j < subMatrixSize; j++)
        {
            matrix4[i][j] = matrix[i + subMatrixSize][j + subMatrixSize];
        }
    }

    printMatrix(matrix1, subMatrixSize, subMatrixSize);
    std::cout << '\n';
    printMatrix(matrix2, subMatrixSize, subMatrixSize);
    std::cout << '\n';
    printMatrix(matrix3, subMatrixSize, subMatrixSize);
    std::cout << '\n';
    printMatrix(matrix4, subMatrixSize, subMatrixSize);

    delete[] matrix;
    delete[] matrix1;
    delete[] matrix2;
    delete[] matrix3;
    delete[] matrix4;*/
}
