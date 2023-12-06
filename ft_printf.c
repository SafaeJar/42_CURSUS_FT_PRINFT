/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:53:10 by sjarfi            #+#    #+#             */
/*   Updated: 2023/12/03 17:49:02 by safae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
static int Type(va_list args, char c){
int i;
i=0;

if(c=='c')
i = print_char(va_arg(args,int));
if(c=='s')
i = print_string(va_arg(args,char *));
if(c=='d' || c=='i')
i = print_number(va_arg(args,int));
if(c=='x')
i = print_base((unsigned int)va_arg(args, long), 16, 0);
if(c=='X')
i = print_base((unsigned int)va_arg(args, long), 16, 1);
if(c=='p')
i = print_address(va_arg(args, void *));
return(i);
}


int ft_printf(const char *format, ...)
{
va_list  args;

 int i;
 int count;
i=0;
count=0;
va_start(args , format);
while(format[i]){
    if(format[i] == '%' && format[i+1]=='\0')
        return (0);
else if (format[i]=='%' && ft_strchr("cspdiuxX",format[i+1]))   
{
            count += Type(args, format[i+1]);
            i++;
}
     else
     {
     		count += print_char(format[i]);
     }
		i++;
               }
va_end(args);
return(count);
}
#include<stdio.h>
int main(){
    int i,x;
i=printf("%c----- %s----    %x        %d     %d\n",'a',"ttttt",83648,34,-56);
x=ft_printf("%c----- %s----    %x        %d     %d\n",'a',"ttttt",83648,34,-56);
printf("%d-----%d\n",i,x);
}
