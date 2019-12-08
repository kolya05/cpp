namespace myMath
{
	int degree(int a, int b)
	{
		int d = 1;
		for (int i = 1; i <= b; ++i)
		{
			d *= a;
		}
		return d;
	}

	int factorial(int const n)
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
}