/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:58:58 by sjarfi            #+#    #+#             */
/*   Updated: 2023/11/22 22:19:55 by sjarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0 || !s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// #include<fcntl.h>
// #include<stdio.h>
// int main(){

// 	int d;
// 	d=open("test.txt",O_CREAT | O_RDWR);
// 	ft_putstr_fd("sdkfluvhjh\viulerh\n",d);
// 	printf("%d\n",d);
// }
