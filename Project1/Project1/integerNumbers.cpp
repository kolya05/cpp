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
