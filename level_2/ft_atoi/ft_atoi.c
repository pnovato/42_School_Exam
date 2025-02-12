#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

int main ()
{
	char a[] = "1234";
	printf("%d\n", ft_atoi(a));
}
