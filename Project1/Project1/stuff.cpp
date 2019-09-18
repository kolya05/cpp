int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
	{
		f *= i;
	}
	return f;
}

int facRec(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * facRec(n - 1);
	}
}
