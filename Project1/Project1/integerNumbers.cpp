#include <iostream>
#include "myMath.h"

using namespace std;

namespace integerNumbers
{
	namespace digits
	{
		int sumOfDigit(int number)
		{
			int sum = 0;
			while (number != 0)
			{
				sum += number % 10;
				number /= 10;
			}
			return sum;
		}

		int amountOfDigit(int number)
		{
			int amount = 0;
			while (number != 0)
			{
				++amount;
				number /= 10;
			}
			return amount;
		}

		int invertedNumber(int number)
		{
			int n = 0;
			for (int i = amountOfDigit(number) - 1; i >= 0; --i)
			{
				n += (number % 10) * myMath::degree(10, i);
				number /= 10;
			}
			return n;
		}

		int smartInvertedNumber(int number)
		{
			int n = 0;
			while (number != 0)
			{
				n = 10 * n + number % 10;
				number /= 10;
			}
			return n;
		}
	}
	// end of digits namespace

	namespace division
	{
		int gcd(int number1, int number2)
		{
			int r = 1;
			for (int i = 1; i <= myMath::extremum::min(number1, number2); i++)
			{
				if (number1 % i == 0 && number2 % i == 0)
				{
					r = i;
				}
			}
			return r;
		}

		int euclid(int number1, int number2)
		{
			/*int a = number1;
			int b = number2;*/
			number1 = myMath::extremum::max(number1, number2);
			number2 = myMath::extremum::min(number1, number2);

			// int count = 0;
			while (number2 != 0)
			{
				// ++count;
				int temp = number1;
				number1 = number2;
				number2 = temp % number2;
			}

			// cout << "Euclid(" << a << "; " << b << "): iterations amount = " << count << endl;
			return number1;
		}

		int euclidFromWiki(int number1, int number2)
		{
			int iterationAmount = 0;
			if (number2 > number1)
			{
				int temp = number1;
				number1 = number2;
				number2 = temp;
			}
			int q = number1 / number2;
			int r = number1 % number2;
			while (r != 0)
			{
				++iterationAmount;
				int temp = number1;
				number1 = number2;
				number2 = temp % number2;
				q = number1 / number2;
				r = number1 % number2;
			}
			cout << iterationAmount << endl;
			return number2;
		}

		int euclidRec(int number1, int number2)
		{
			int a = myMath::extremum::max(number1, number2);
			int b = myMath::extremum::min(number1, number2);
			if (b == 0)
			{
				return a;
			}
			else
			{
				return euclidRec(b, a % b);
			}
		}

		int euclidIter(int const number1, int const number2)
		{
			int a = myMath::extremum::max(number1, number2);
			int b = myMath::extremum::min(number1, number2);
			while (b != 0)
			{
				int temp = a;
				a = b;
				b = temp % b;
			}
			return a;
		}
	}
	// end of division namespace
}