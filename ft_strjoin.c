//Falta header

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strjoin;
	size_t			malloc_size;
	size_t			i;
	size_t			j;

	malloc_size = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	strjoin = calloc(sizeof(char), malloc_size);
	if (!(strjoin))
		return (NULL);
	i = 0;
	while (i < (ft_strlen((const char *)s1)))
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (malloc_size - 1))
	{
		strjoin[i] = s2[j];
		i++;
		j++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
