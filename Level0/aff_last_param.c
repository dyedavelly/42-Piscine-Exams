#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    i = argc - 1;
    int j;
    j = 0;

    if(argc > 1) 
    {
        while(argv[i][j] != '\0')
        {
           write(1,&argv[i][j], 1);
           j++;
        }
    }
    write(1,"\n", 1);
    return (0);
}