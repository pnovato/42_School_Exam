#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int bit = 128;
	int oc = octet;
	while (bit > 0)
	{
		if(bit <= oc)
		{
			write(1, "1", 1);
			oc %= bit;
		}
		else
			write(1, "0", 1);
		bit /= 2;
	}
}

int main ()
{
	unsigned char number = 2;
	print_bits(number);
}
