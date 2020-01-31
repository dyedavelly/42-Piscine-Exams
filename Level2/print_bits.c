#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char c)
{
    int     n;

    n = 128;
    while(n > 0)
    {
        if(c / n == 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        c = c % n;
         n = n / 2;
    }
}

void	reverse_print_bits(unsigned char octet)
{
    int shift = 0;
    unsigned char mask = 1;
    char out;
    while(shift <= 7)
    {
        out = ((octet >> shift) & mask) + '0';
        write(1, &out, 1);
        shift++;
    }
}



// unsigned char	swap_bits(unsigned char octet)
// {
// 	return ((octet << 4 | octet >> 4)); // rotate left and take OR logic with rotate right by "4"
// }


int     main()
{
    unsigned char c;
    c = 'a';
   
    print_bits(c);
    printf("\n");
    reverse_print_bits(c);
    // unsigned char res;
    // res = swap_bits(c);
    // printf("%s",res);
  

}