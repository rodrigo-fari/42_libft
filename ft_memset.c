/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:21:18 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/15 16:45:52 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;

	j = s;
	i = 0;
	while (i < n)
	{
		j[i] = c;
		i++;
	}
	return (s);
}

/* 
int main(void)
{
	int s1[]={1, 2, 3, 4, 5};
	ft_memset(s1, 'A', 10);
	write(1, &s1, sizeof(&s1));
	return (0);
} */