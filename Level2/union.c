/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyedavel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 00:38:18 by dyedavel          #+#    #+#             */
/*   Updated: 2020/01/24 01:19:00 by dyedavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_union(char *a, char *b)
{
	char characters[128] = { 0 };
	char c;

	while (*a != '\0')
	{
		c = *a;
		if (characters[c] == 0)
		{
			write(1, a, 1);
			characters[c] = 1;
		}
		++a;
	}

	while (*b != '\0')
	{
		c = *b;
		if (characters[c] == 0)
		{
			write(1, b, 1);
			characters[c] = 1;
		}
		++b;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
