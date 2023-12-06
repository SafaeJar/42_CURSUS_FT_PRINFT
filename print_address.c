#include"ft_printf.h"
 int print_address_recursive(unsigned long address) {
    char *hexChars = "0123456789abcdef";
    static int count;
    count=0;
    if (address != 0) {
        print_address_recursive(address / 16);
       count+= print_char(hexChars[address % 16]);
    }
    return(count);
}

 int print_address(void *ptr) {
    // Impression de l'adresse sous forme hexadécimale
    unsigned long address = (unsigned long)ptr;

   static int count = 0;
    count += print_string("0x");

    if (address == 0) {
        count += print_char('0');
    } else {
       count += print_address_recursive(address);
    }

    return count;
}