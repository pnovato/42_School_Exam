#include <unistd.h>

int	is_prime(int nb)
{
	int i = 2;
	if (nb == 0)
		return 0;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return 0;	
		}
		i++;
	}
	return 1;
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (str[i] == 32 && (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + '0');
}

int	main(int ac, char **av)
{
	int nb;
	int res = 0;
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		if (nb < 0)
		{
			write(1, "0\n", 2);
			return 0;
		}
		while (nb > 1)
		{
			if (is_prime(nb))
				res += nb;
			nb--;
		}
		ft_putnbr(res);
		write(1, "\n", 1);
		return 0;
	}
	write(1, "0\n", 2);
	return 0;
}


