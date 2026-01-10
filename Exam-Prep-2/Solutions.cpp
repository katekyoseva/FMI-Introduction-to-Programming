#include <iostream>
const int MAX_LENGTH = 1024;

int stringLength(const char* str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int digitsCounter(int num)
{
    int count = 0;

    if (num >= 0 && num <= 9)
    {
        count = 1;
    }
    else 
    {
        while (num != 0)
        {
            num /= 10;
            count++;
        }
    }
    return count;
}

//Task 1
int newStrLength(const char* str)
{
    int newStrLen = 0;

    for (int i = 0; str[i] != '\0'; ) {
        char current = str[i];
        int count = 0;

        while (str[i] == current)
        {
            count++;
            i++;
        }

        newStrLen += 1;
        newStrLen += digitsCounter(count);
    }
    return newStrLen;
}

char* compressedString(const char* str)
{
    int newStrLen = newStrLength(str);

    char* result = new char[newStrLen + 1] {};

    int i = 0;
    int index = 0;
    for (int i = 0; str[i] != '\0'; ) {
        char current = str[i];
        int count = 0;

        while (str[i] == current)
        {
            count++;
            i++;
        }

        if (index < newStrLen)
        {
            result[index++] = current;
            int digits = digitsCounter(count);

            for (int j = 0; count != 0; j++)
            {
                result[index++] = '0' + (count % 10);
                count /= 10;
            }
        }
    }
        return result;
}

void printArray(const char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        std::cout << str[i];
    }
}

//Task 2
int findOccurrences(const char* input, const char* pattern, bool withOverlap)
{
    int count = 0;
    int patternLen = stringLength(pattern);
    char firstPatternSymbol = pattern[0];

    for (int i = 0; input[i] != '\0'; i++) {
        int patternIndex = 0;
        
        while (pattern[patternIndex] != '\0' && input[i + patternIndex] != '\0' 
            && input[i + patternIndex] == pattern[patternIndex]) {
            patternIndex++;
        }

        if (withOverlap)
        {
            if (pattern[patternIndex] == '\0') {
                count++;
            }
            
        }
        else
        {
            if (pattern[patternIndex] == '\0') {
                count++;
                i += patternIndex;
            }
            else {
                i++;
            }
        }
        
    }

    return count;
}

int findOccurrencesWithoutOverlap(const char* input, const char* pattern)
{
    int count = 0;

    for (int i = 0; input[i] != '\0'; ) {
        int patternIndex = 0;

        while (pattern[patternIndex] != '\0' && input[i + patternIndex] != '\0'
            && input[i + patternIndex] == pattern[patternIndex]) {
            patternIndex++;
        }

        if (pattern[patternIndex] == '\0') {
            count++;
            i += patternIndex;
        }
        else {
            i++;
        }
    }

    return count;
}

int main()
{
    //Task 1
    /*char str[MAX_LENGTH];
    std::cin >> str;

    char* result = compressedString(str);
    printArray(result);

    delete[] result;*/

    //Task 2
    char text[MAX_LENGTH];
    char pattern[MAX_LENGTH];
    std::cin >> text >> pattern;

    std::cout << findOccurrences(text, pattern, true) << '\n';
    std::cout << findOccurrences(text, pattern, false);
}
