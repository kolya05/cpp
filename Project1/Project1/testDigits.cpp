#include "integerNumbers.h"
#include <iostream>

using namespace std;

namespace test
{
	namespace integerNumbersTest
	{
		namespace digits
		{
			void sumOfDigit()
			{
				if (integerNumbers::digits::sumOfDigit(1234) == 10)
				{
					cout << "test1 passed" << endl;
				}
				else
				{
					cout << "test1 failed" << endl;
				}

				if (integerNumbers::digits::sumOfDigit(564) == 15)
				{
					cout << "test2 passed" << endl;
				}
				else
				{
					cout << "test2 failed" << endl;
				}

				if (integerNumbers::digits::sumOfDigit(5) == 5)
				{
					cout << "test3 passed" << endl;
				}
				else
				{
					cout << "test3 failed" << endl;
				}
			}
		}
		// end of digits namespace
	}
}