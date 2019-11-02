#include "integerNumbers.h"
#include <iostream>

using namespace std;

namespace test
{
	namespace integerNumbersTest
	{
		namespace division
		{
			void euclid()
			{
				if (integerNumbers::division::euclid(1071, 462) == 7)
				{
					cout << "test1 passed" << endl;
				}
				else
				{
					cout << "test1 failed" << endl;
				}
			}
		}
	}
}

namespace test
{
	namespace integerNumbersTest
	{
		namespace division
		{
			void gcd()
			{
				if (integerNumbers::division::gcd(6, 3) == 3)
				{
					cout << "test1 passed" << endl;
				}
				else
				{
					cout << "test1 failed" << endl;
				}
			}
		}
	}
}