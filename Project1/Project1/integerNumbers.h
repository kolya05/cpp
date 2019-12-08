#pragma once

namespace integerNumbers
{
	namespace digits
	{
		// calculate sum of digits
		int sumOfDigit(int number);

		// calculate number of digits
		int amountOfDigit(int number);

		// invert numbe
		int invertedNumber(int number);

		// invert number
		int invertedNumber(int number);

		//
		int smartInvertedNumber(int number);
	}

	namespace division
	{
		// stupid NOD
		int gcd(int number1, int number2);

		// euclid
		int euclid(int number1, int number2);

		// euclid wiki
		int euclidFromWiki(int number1, int number2);

		// euclid recursion
		int euclidRec(int number1, int number2);

		// euclid iteration
		int euclidIter(int number1, int number2);
	}
}
