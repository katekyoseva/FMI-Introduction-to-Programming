#include <iostream>
const int MAX_LENGTH = 1024;
const int LOWER_CASE_LETTERS = 26;

bool isValidSymbol(char symbol)
{
    return (symbol >= 'a') && (symbol <= 'z');
}

int stringLength(const char* str) {
    int length = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

void stringCopy(char* destination, const char* source) {
    int i;

    for (i = 0; source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }

    destination[i] = '\0';
}

char* createPalindrome(const char* firstStr, const char* secondStr) {
    int firstLen = stringLength(firstStr);
    int secondLen = stringLength(secondStr);
    int newLen = firstLen + secondLen;

    char* result = new char[newLen + 1] {};

    int counter[LOWER_CASE_LETTERS] = {};

    for (int i = 0; i < firstLen; i++) {
        if (isValidSymbol(firstStr[i])) {
            counter[firstStr[i] - 'a']++;
        }
    }

    for (int i = 0; i < secondLen; i++) {
        if (isValidSymbol(secondStr[i])) {
            counter[secondStr[i] - 'a']++;
        }
    }

    int oddOccurrencesCount = 0;
    int oddCharIndex = -1;

    for (int i = 0; i < LOWER_CASE_LETTERS; i++) {
        if (counter[i] % 2 != 0) {
            oddOccurrencesCount++;
            oddCharIndex = i;
        }
    }

    //If there are more than 1 odd occurrences there cannot be a palindrome
    if (oddOccurrencesCount > 1) {
        return nullptr;
    }

    if (oddCharIndex != -1) {
        result[newLen / 2] = (char)('a' + oddCharIndex);
    }

    int leftSideIndex = 0;
    int rightSideIndex = newLen - 1;
    int middle = newLen / 2;

    for (int i = 0; i < LOWER_CASE_LETTERS; ++i) {

        while (counter[i] >= 2) {
            char current = (char)('a' + i);

            result[leftSideIndex] = current;
            result[rightSideIndex] = current;

            leftSideIndex++;
            rightSideIndex--;
            counter[i] -= 2;
        }

        if (leftSideIndex == middle)
        {
            break;
        }
    }

    return result;
}

int main() {
    char buffer1[MAX_LENGTH];
    char buffer2[MAX_LENGTH];

    std::cin >> buffer1 >> buffer2;

    for (int i = 0; buffer1[i] != '\0'; i++)
    {
        if (!isValidSymbol(buffer1[i]))
        {
            std::cout << "Input should contain only lower case latin letters! Please enter valid input!";
            return 0;
        }
    }

    for (int i = 0; buffer2[i] != '\0'; i++)
    {
        if (!isValidSymbol(buffer2[i]))
        {
            std::cout << "Input should contain only lower case latin letters! Please enter valid input!";
            return 0;
        }
    }

    int length1 = stringLength(buffer1);
    int length2 = stringLength(buffer2);

    char* str1 = new char[length1 + 1] {};
    char* str2 = new char[length2 + 1] {};

    stringCopy(str1, buffer1);
    stringCopy(str2, buffer2);

    char* result = createPalindrome(str1, str2);

    if (result != nullptr) {
        std::cout << result;
        delete[] result;
    }

    delete[] str1;
    delete[] str2;

    return 0;
}