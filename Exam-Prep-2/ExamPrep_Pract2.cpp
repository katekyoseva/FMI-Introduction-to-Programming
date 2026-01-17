#include <iostream>

//Task 1
int getLen(const char* str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

char* compressString(const char* str) {
    int originalLen = getLen(str);

    char counter[26] = {};
    for (int i = 0; i < originalLen; ++i) {
        counter[str[i] - 'a']++;
    }

    int newLen = 0;
    for (int i = 0; i < 26; i++)
    {
        if (counter[i] > 0)
        {
            newLen++;
        }
    }

    char* result = new char[newLen + 1] {};

    int j = 0;
    for (int i = 0; i < originalLen; ++i) {
        if (i == 0 || str[i] != str[i - 1]) {
            result[j++] = str[i];
        }
    }

    return result;
}
//Task 2
void fillMatrix(int** matrix, int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void transpose(int** source, int** transposed, int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transposed[j][i] = source[i][j];
        }
    }
}

void printMatrix(int** matrix, int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
//Task 3
void encrypt(char* str, int k) {
    if (*str == '\0') 
        return;

    if (*str >= 'a' && *str <= 'z') {
        *str = ((*str - 'a' + k) % 26) + 'a';
    }

    encrypt(str + 1, k);
}


int main() {
    //Task 1
    /*int N;
    std::cin >> N;

    char** words = new char* [N];

    for (int i = 0; i < N; ++i) {
        char buffer[101];
        std::cin >> buffer;
        words[i] = compressString(buffer);
    }

    for (int i = N - 1; i >= 0; --i) {
        std::cout << words[i] << std::endl;
        delete[] words[i];
    }

    delete[] words;
    */

    //Task 2
    //int n;
    //std::cin >> n;
    ////create
    //int** matrix = new int* [n];
    //int** transposed = new int* [n];

    //for (int i = 0; i < n; ++i) {
    //    matrix[i] = new int[n];
    //    transposed[i] = new int[n];
    //}
    //
    //fillMatrix(matrix, n);

    //// Transpose logic
    //transpose(matrix, transposed, n);

    //// Print transposed matrix
    //printMatrix(transposed, n);

    //// Means of even rows (0, 2, ...) of transposed
    //std::cout << "even rows: ";
    //for (int i = 0; i < n; i += 2) {
    //    double sum = 0;
    //    for (int j = 0; j < n; j++) sum += transposed[i][j];
    //    std::cout << sum / n << " ";
    //}
    //std::cout << std::endl;

    //// Means of odd columns (1, 3, ...) of transposed
    //std::cout << "odd columns: ";
    //for (int i = 1; i < n; i += 2) {
    //    double sum = 0;
    //    for (int j = 0; j < n; j++) sum += transposed[j][i];
    //    std::cout << sum / n << " ";
    //}
    //std::cout << std::endl;

    //// Cleanup
    //for (int i = 0; i < n; i++) {
    //    delete[] matrix[i];
    //    delete[] transposed[i];
    //}

    //delete[] matrix;
    //delete[] transposed;

   //Task 3

        char str[101];
        int key;

        std::cin.getline(str, 100);
        std::cin >> key;

        encrypt(str, key);
        std::cout << str << std::endl;

}