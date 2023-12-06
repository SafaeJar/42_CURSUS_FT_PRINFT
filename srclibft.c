#include "ft_printf.h"
char	*ft_strchr(const char *string, int c)
{
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(string);
	while (i <= l)
	{
		if (string[i] == (char)c)
			return ((char *)(string + i));
		i++;
	}
	return (0);
}
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void	ft_putnbr_fd(int n, int fd)
{
	
	if (n == -2147483648)
	{
		print_char('-');
		print_char('2');
		ft_putnbr_fd(147483648, fd);
		return ;
	}

	unsigned int	nb;

	if (n < 0)
	{
		print_char('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb <= 9)
		print_char(nb + 48);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		print_char(nb % 10 + 48);
	}
}