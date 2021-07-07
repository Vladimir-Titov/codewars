#include <stdbool.h>
#include <string.h>

bool is_have(char *str, char c)
{
	int	i;
	char	tmp;
	if (c >= 'A' && c <= 'Z')
		c += 32;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return true;
		i++;
	}
	return false;
}

bool IsIsogram(char *str)
{
	char	tmp[strlen(str)];
	int i;
	int k;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (is_have(tmp, str[i]))
			return false;
		else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					tmp[k] = str[i] + 32;
				else
					tmp[k] = str[i];
				k++;
			}
		i++;
	}
	return true;
}
