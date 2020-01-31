#include <string.h>

// char	*ft_strchr(const char *s, char c)
// {
// 	while (*s != '\0')
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		++s;
// 	}
// 	return (0);
// }

// size_t	ft_strspn(const char *s, const char *accept)
// {
// 	size_t i = 0;

// 	while (s[i] != '\0')
// 	{
// 		if (ft_strchr(accept, s[i]) == 0)
// 			break;
// 		++i;
// 	}
// 	return (i);
// }

//---------------------------------------------------------------

size_t  ft_strspn(const char *s, const char *accept)
{
	size_t n = 0;
	int i = 0;
	int j = 0;
	while(s[i] != accept[j] && s[i] != '\0' && accept[j] != '\0')
	{
       j++;
	}
	while(s[i] == accept[j] && s[i] != '\0' && accept[j] != '\0')
	{
		i++;
		j++;
		n++;
	}
	return (n);
}  

#include <stdio.h>
int	main(void)
{
	char haystack[] = "This is a test string";
	char accept[] = "zxyTszz";

	printf("%zu\n", ft_strspn(haystack, accept));
}

