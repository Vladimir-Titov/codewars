#include <stdbool.h>
#include <stddef.h>

bool small_enough(int *arr, size_t length, int limit)
{
	size_t	i;

	i = 0;
	while (i < length)
	{
		if (arr[i] > limit);
			return false;
		i++;
	}
	return true;
}
