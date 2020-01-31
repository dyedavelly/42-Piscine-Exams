#include <unistd.h>

int     main(int argc, char **argv)
{
    int j;

    j = 0;
    if(argc == 2)
    {
        while(argv[1][j] != '\0')
        {
            if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
                argv[1][j] = 'a' + 'z' - argv[1][j];
            else if(argv[1][j] >= 'A' && argv[1][j] <= 'Z')
               argv[1][j] = 'A' + 'Z' - argv[1][j];
            write(1, &argv[1][j], 1);
            j++;
        }
    }
    write(1,"\n", 1);
    return (0);
}