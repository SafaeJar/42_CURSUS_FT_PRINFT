#include"ft_printf.h"
int nbr_chiffres(unsigned int nb)
{
	int	ch;

	ch = 0;
	if (nb <= 0)
		ch++;
	while (nb)
	{
		ch++;
		nb /= 10;
	}
	return (ch);
}
int	print_unsigned(unsigned int n)
{
	int	count;

	count = nbr_chiffres(n);
	if (n <= 9)
		print_char(n + '0');
	else
	{
		print_unsigned(n / 10);
		print_unsigned(n % 10);
	}
	return (count);
}