#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

bool is_prime(int num)
{
	int i;
	if (num <= 1)
		return false;
	i = 2;
	while (i * i  <= num)
	{
		if (num % i == 0)
			return false;
		i++;
	}
	return true;
}
int	main(int argc, char **argv)
{

	if (argc)
	{
		printf("result: %d\n", is_prime(atoi(argv[1])));
	}
	return (0);
}
