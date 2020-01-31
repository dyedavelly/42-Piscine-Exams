#include <unistd.h>

#include <unistd.h>

void	print_union(char *a, char *b)
{
	char characters[128] = { 0 };
	char c;

	while (*b != '\0')
	{
		c = *b;
		if (characters[c] == 0)
		{
            characters[c] = 1;
		}
        ++b;
    }
		
        while (*a != '\0')
	{
		c = *a;
		if (characters[c] == 1)
		{
			write(1, a, 1);
            characters[c] = 0;
		}
		++a;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
