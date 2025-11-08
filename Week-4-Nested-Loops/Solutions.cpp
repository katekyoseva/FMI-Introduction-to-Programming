#include <iostream>

int main()
{
   //Task 1
	/*int n;
	
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}*/

	//Task 2
	/*int n;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			if ((i == 0 || i == n - 1) || (j == 0 || j == n - 1))
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << "  ";
			}
		}
		std::cout << '\n';
	}*/

	//Task 3
	/*int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) 
			{
				std::cout << 'o';
			}
			else if (j < i)
			{
				std::cout << '-';
			}
			else
			{
				std::cout << '+';
			}
		}
		std::cout << std::endl;
	}*/

	//Task 4
	/*int n;

	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int result = i * j;

			if (result / 10 == 0) 
			{
				std::cout << ' ' << result << ' ';
			}
			else
			{
				std::cout << result << ' ';
			}
		}

		std::cout << std::endl;
	}*/

	//Task 5
	/*int n;

	std::cin >> n;

	int rowLenght = 2 * n - 1;

	// crown
	for (int i = 0; i < n; i++)
	{
		for (int j = rowLenght / 2 - i; j > 0; j--)
		{
			std::cout << ' ';
		}

		int currentRowWidth = 2 * i + 1;

		for (int j = 0; j < currentRowWidth; j++)
		{
			std::cout << '*';
		}

		std::cout << std::endl;
	}

	// trunk
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < rowLenght / 2; j++)
		{
			std::cout << ' ';
		}
		std::cout << "|" << std::endl;
	}*/

	//Task 6
	/*int hours = 24;
	int minutes = 60;

	for (int i = 0; i < hours; i++)
	{
		for (int j = 0; j < minutes; j++) 
		{
			if (i < 10)
			{
				std::cout << '0';
			}

			std::cout << i << ':';

			if (j < 10)
			{
				std::cout << '0';
			}

			std::cout << j << std::endl;
		}
	}*/

	//Task 7
	/*int n, x, y;
	std::cin >> n >> x >> y;

	if (n < 0 || y < 0 || x < 0)
	{
		std::cout << "Invalid input! N, X and Y cannot be negative!";

		return 0;
	}

	if (x > n || y > n)
	{
		std::cout << "Invalid input! X and Y must be smaller than N or equal to N";

		return 0;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j == x && i == n - y)
			{
				std::cout << '*';
			}

			if (j == 0)
			{
				std::cout << n - i << ' ';
			}
			else if (i == n)
			{
				std::cout << j << ' ';
			}
			else
			{
				std::cout << "  ";
			}
		}

		std::cout << std::endl;
	}*/
}
