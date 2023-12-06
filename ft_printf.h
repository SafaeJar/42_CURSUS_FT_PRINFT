/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:55:07 by sjarfi            #+#    #+#             */
/*   Updated: 2023/11/30 16:56:08 by sjarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include<stdio.h>
#include<stddef.h>
#include<unistd.h>
int ft_printf(const char *format, ...);
//static int Type(va_list args, char c);
int  print_char(char c);
int  print_string(char *c);
int  print_number(int c);
char	*ft_strchr(const char *string, int c);
size_t	ft_strlen(const char *s);
void	ft_putnbr_fd(int n, int fd);
int	print_base(unsigned long n, int base, int uol);
 int print_address(void *ptr);
 int print_address_recursive(unsigned long address);
 int	print_unsigned(unsigned int n);




#endif
