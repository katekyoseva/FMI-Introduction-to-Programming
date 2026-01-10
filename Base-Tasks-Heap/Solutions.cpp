#include <iostream>
const int MAX_LENGTH = 1024;

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

char* copyNewString(const char* source)
{
    unsigned length = stringLength(source);

    char* result = new char[length + 1];
    stringCopy(result, source);

    return result;
}

char* concatNewString(const char* string1, const char* string2)
{
    unsigned length1 = stringLength(string1);
    unsigned length2 = stringLength(string2);

    char* result = new char[length1 + length2 + 1] {};

    stringConcat(result, string1);
    stringConcat(result + length1, string2);

    return result;
}

int main()
{
    const char str[] = "Hello"; // == const char* str = "Hello";
    int length = stringLength(str);
    char* copy = new char[length + 1] {};

    stringCopy(copy, str);
    std::cout << copy << '\n';

    delete[] copy;

    char buffer[MAX_LENGTH] = "Hello";
    char string[] = ", world";

    stringConcat(buffer, string);

    std::cout << buffer << '\n';
}
