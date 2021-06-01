#include <iostream>

using namespace std;

int main()
{
	for (int number = 312614; number <= 312651; number++)
	{
		int dividers[6] = { 0, 0, 0, 0, 0 , 0 };
		int count = 0;
		for (int divider = 1; divider <= number; divider++)
		{ 
			if (number % divider == 0)
			{
				if (count < 6)
				{
					dividers[count] = divider;
				}
				count++;
				if (count > 6)
				{
					break;
				}
			}
		}

		if (count != 6)
		{
			continue;
		}

		for (int i = 0; i < 6; i++)
		{
			cout << dividers[i] << " ";
		}
		cout << endl;
	}
	return 0;
}