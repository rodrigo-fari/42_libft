//FALTA HEADER

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_src;
	size_t len_dst;
	size_t space_left;

	space_left = size - 1;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);

	if (size <= len_dst)
		return (len_src + size);
	if(len_dst > size)
		return (size);
	i = 0;
	while (src[i] && i <= space_left)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}