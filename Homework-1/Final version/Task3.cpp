#include <iostream>

long long pow(int base, int power)
{
	long long result = 1;
	for (int i = 1; i <= power; i++)
	{
		result *= base;
	}
	return result;
}

int digitCounter(int number)
{
	int count = 0;

	if (number == 0)
	{
		count = 1;
	}

	while (number != 0)
	{
		number /= 10;
		count++;
	}

	return count;
}

unsigned long long concat(int firstNum, int secondNum)
{
	int digitsOfSecond = digitCounter(secondNum);

	return firstNum * pow(10, digitsOfSecond) + secondNum;
}

int specificDigitCounter(long long number, int wantedDigit)
{
	int counter = 0;
	while (number != 0)
	{
		int current = number % 10;
		number /= 10;
		if (current == wantedDigit)
		{
			counter++;
		}
	}
	return counter;
}

unsigned long long sort(unsigned long long number)
{
	unsigned long long sortedNumber = 0;

	for (int digit = 9; digit >= 0; digit--)
	{
		long long countOfCurrentDigit = specificDigitCounter(number, digit);

		for (int i = countOfCurrentDigit; i > 0; i--)
		{
			sortedNumber = sortedNumber * 10 + digit;
		}
	}
	return sortedNumber;
}

int main()
{
    int N;

    std::cin >> N;

	long long biggest = 0;
	long long secondBiggest = 0;

	for (int i = 0; i < N; i++)
	{
		int A, B;

		std::cin >> A  >> B;  

		unsigned long long concatNumber = concat(A, B);

		unsigned long long sortedNumber = sort(concatNumber);

		if (sortedNumber > biggest)
		{
			secondBiggest = biggest;
			biggest = sortedNumber;
		} 
		else if (sortedNumber > secondBiggest)
		{
			if (sortedNumber != biggest)
			{
				secondBiggest = sortedNumber;
			}
		}
	}

	std::cout << biggest << '\n' << secondBiggest;

	return 0;
}
