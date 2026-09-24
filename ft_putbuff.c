#include "libc.h"

void    ft_putbuff(char *buffer, int row, int col, const char *str) 
{
    while (*str && col < VGA_WIDTH) {
        buffer[row * VGA_WIDTH + col] = *str;
        str++;
        col++;
    }
}