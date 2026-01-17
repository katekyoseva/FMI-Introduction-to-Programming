#include <iostream>
const int MAX_LENGTH = 101;
const int LETTERS_COUNT = 26;
const int ALL_LETTERS = 52;

bool isValidSymbol(char symbol)
{
    return ((symbol >= 'a') && (symbol <= 'z') 
         || (symbol >= 'A') && (symbol <= 'Z'));
}

bool isLowerCase(char symbol)
{
    return (symbol >= 'a') && (symbol <= 'z');
}

int stringLength(const char* str)
{
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int onlyLettersCount(int* str)
{
    int counter = 0;
    for (int i = 0; i < LETTERS_COUNT; i++)
    {
        if (str[i] == 1)
        {
            counter++;
        }
    }
    return counter;
}

int getLetterIndex(char symbol) {
    if (symbol >= 'a' && symbol <= 'z') {
        return symbol - 'a';
    }
    return (symbol - 'A') + LETTERS_COUNT;
}

int countDistinctSubstrings(const char* str) {
    int length = stringLength(str);
    
    long long substr[MAX_LENGTH];
    substr[0] = 1;

    int lastOccurrence[ALL_LETTERS];
    for (int i = 0; i < ALL_LETTERS; i++)
    {
        lastOccurrence[i] = -1;
    }

    for (int i = 1; i <= length; i++) {
        substr[i] = 2 * substr[i - 1];

        char currentSymbol = str[i - 1];
        int letterIdx = getLetterIndex(currentSymbol);

        if (lastOccurrence[letterIdx] != -1) {
            int previousPos = lastOccurrence[letterIdx];
            substr[i] = substr[i] - substr[previousPos - 1];
        }

        lastOccurrence[letterIdx] = i;
    }

    return substr[length] - 1;
}

int main()
{
    char input[MAX_LENGTH];
    std::cin >> input;

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (!isValidSymbol(input[i]))
        {
            std::cout << "Input should contain only latin letters! Please enter valid input!";
            return 0;
        }
    }

    std::cout << countDistinctSubstrings(input);

    return 0;
}
