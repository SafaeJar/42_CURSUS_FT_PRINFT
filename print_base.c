#include"ft_printf.h"
int	print_base(unsigned long n, int base, int uol)
{
	int		count;
	char	*b;

	count = 0;
	if (uol == 1)
		b = "0123456789ABCDEF";
	else
		b = "0123456789abcdef";
	if (n < 0)
	{
		print_char('-');
		count += print_base(-n, base, uol) + 1;
	}
	else if (n >= (unsigned int)base)
	{
		count = print_base(n / base, base, uol);
		count += print_char(b[n % base]);
	}
	else
		count += print_char(b[n]);
	return (count);
}