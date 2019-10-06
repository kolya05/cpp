namespace tasks
{
	int sumRec(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			return n + sumRec(n - 1);
		}
	}

	int sumIter(int n)
	{
		int x = 0;
		for (int i = 1; i <= n; i++)
		{
			x += i;
		}
		return x;
	}
}