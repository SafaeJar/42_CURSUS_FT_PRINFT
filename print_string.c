#include"ft_printf.h"

int  print_string(char *s){
	 int	i;
	int count;
	i = 0;
	count =0;
	if (!s)
	{
		write(1,"(null)", 6);
		return (6);
	}
	count =ft_strlen(s);
	while(s[i])
	{
		write(1,&s[i],1);
		i++;
	}
	return (count);

}
