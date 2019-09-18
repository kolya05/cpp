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

int degree(int a, int b)
{
	int d = 1;
	for (int i = 1; i <= b; ++i)
	{
		d *= a;
	}
	return d;
}

int invertedNumber(int number)
{
	int n = 0;
	for (int i = amountOfDigit(number) - 1; i >= 0; --i)
	{
		n += (number % 10) * degree(10, i);
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
