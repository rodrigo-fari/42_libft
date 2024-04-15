/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:21:18 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/15 14:42:54 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memset(void *str, int c, size_t n)
{
	size_t i;
	unsigned char *j;
	
	j = str;
	i = 0;
	while (j[i] && i <= n)
	{
		j[i] = c;
		i++;
	}
}

/* int main(void)
{
	int s1[]={1, 2, 3, 4, 5};
	ft_memset(s1, 0, 10);
	return (0);
} */