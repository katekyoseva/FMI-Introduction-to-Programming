#include <iostream>
#include <cmath>

bool isPrime(unsigned long long number)
{
	if (number < 2)
	{ 
		return false;
	}
		
	for (long long i = 2; i * i <= number; i++)
	{
		if (number % i == 0) 
		{
			return false;
		}
	}

	return true;
}

bool hasDifferentDigits(unsigned long long number)
{
	while (number > 0)
	{
		int lastDigit = number % 10;
		number /= 10;

		unsigned long long copyNumber = number;
		while (copyNumber > 0)
		{
			int last = copyNumber % 10;

			if (last == lastDigit)
			{
				return false;
			}
				
			copyNumber /= 10;
		}
	}

	return true;
}

bool isRemarkable(unsigned long long number)
{
	return isPrime(number) && hasDifferentDigits(number);
}

int main()
{
	unsigned long long N;

	std::cin >> N;

	if (N < 1 || N > pow(10, 9))
	{
		std::cout << "Please enter a number between 1 and 10^9 (inclusively)!";
		return 0;
	}

	if (isRemarkable(N))
	{
		std::cout << N;
	}
	else
	{
		long long higherNumber = N;
		long long lowerNumber = N;

		for (;;)
		{
			higherNumber++;
			lowerNumber--;

			bool isLowerRemarkable = (lowerNumber >= 3 && isRemarkable(lowerNumber));
			bool isHigherRemarkable = isRemarkable(higherNumber);

			if (isLowerRemarkable && isHigherRemarkable)
			{
				std::cout << lowerNumber;
				break;
			}
			
			if(isHigherRemarkable)
			{
				std::cout << higherNumber;
				break;
			}
			
			if(isLowerRemarkable)
			{
				std::cout << lowerNumber;
				break;
			}

		}
		
	}

	return 0;
}
