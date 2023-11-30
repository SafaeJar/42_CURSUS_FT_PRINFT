/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:10 by sjarfi            #+#    #+#             */
/*   Updated: 2023/11/30 17:31:22 by sjarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
va_list  args;

unsigned int i;
i=0;
va_start(args , format);
while(*format != '\0'){
    if(*format == '%')
    {
        break;
    }
    else {
        i=i+print_char(*format);
        format++;
        
    }
}
va_end(args);
return(i);

}
#include<stdio.h>
int main(){
printf("helloo \n");
ft_printf("helloo \n");
}
