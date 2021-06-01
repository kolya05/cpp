#include <iostream>

using namespace std;

int main()
{
	for (int number = 174457; number <= 174505; number++)
	{
		int count = 0;
		int divider1 = 0;
		int divider2 = 0;
		for (int divider = 2; divider < number; divider++)
		{
			if (number % divider == 0)
			{
				count++;
				if (count == 1)
				{
					divider1 = divider;
				}
				else if (count == 2)
				{
					divider2 = divider;
				}
				else if (count > 2)
				{
					break;
				}
			}
		}
		if (count == 2)
		{
			cout << divider1 << " " << divider2;
			cout << endl;
		}
	}
	return 0;
}