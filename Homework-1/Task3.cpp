#include <iostream>
#include <cmath>

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

int zeroCounter(long long number)
{
	int counter = 0;
	while (number != 0)
	{
		int current = number % 10;
		number /= 10;
		if (current == 0)
		{
			counter++;
		}
	}
	return counter;
}

unsigned long long sort(unsigned long long number)
{
	unsigned long long sortedNumber = 0;

	int zeroCount = zeroCounter(number);

	while (number > 0)
	{
		int biggestDigit = -1;
		unsigned long long copyOfNumber = number;

		while (copyOfNumber > 0)
		{
			int digit = copyOfNumber % 10;

			if (digit > biggestDigit)
			{
				biggestDigit = digit;
			}

			copyOfNumber /= 10;
		}

		sortedNumber = sortedNumber * 10 + biggestDigit;

		unsigned long long newNumber = 0;

		unsigned long long digitPosition = 1;

		while (number > 0)
		{
			int currentDigit = number % 10;

			if (currentDigit != biggestDigit)
			{
				newNumber += currentDigit * digitPosition;
				if (currentDigit != 0)
				{
					digitPosition *= 10;
				}
			}
			else
			{
				digitPosition *= 10;
				biggestDigit = -1;
			}
			number /= 10;
		}

		number = newNumber;
	}

	sortedNumber *= pow(10, zeroCount);

	return sortedNumber;
}

int main()
{
    int N;

    std::cin >> N;

	if (N < 2)
	{
		std::cout << "Please enter a number higher than 1!";
		return 0;
	}

	long long biggest = 0;
	long long secondBiggest = 0;

	for (int i = 0; i < N; i++)
	{
		int A, B;

		std::cin >> A  >> B;

		if (A < 0 || B < 0 || A > pow(2, 16) || B > pow(2, 16))
		{
			std::cout << "Please enter a number between 0 and 2^16 (inclusively)!";
			return 0;
		}

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
