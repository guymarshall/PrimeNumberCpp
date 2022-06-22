#include <math.h>

bool is_prime_number(int number)
{
	if (number == 2)
	{
		return true;
	}
	else if (number <= 1 || number % 2 == 0)
	{
		return false;
	}
    int ceiling_root = ceil(sqrt(number));
    for (int i = 3; i <= ceiling_root; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}