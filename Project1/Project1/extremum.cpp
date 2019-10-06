namespace myMath
{
	namespace extremum
	{
		int min(int number1, int number2)
		{
			if (number1 < number2)
			{
				return number1;
			}
			else
			{
				return number2;
			}
		}

		int max(int number1, int number2)
		{
			if (number1 > number2)
			{
				return number1;
			}
			else
			{
				return number2;

			}
		}
	}
	// end of extremum namespace
}