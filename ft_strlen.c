/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:41:11 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/18 17:56:59 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t		i;
	const char	*s;

	s = str;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
/* 
int main(void)
{
	printf("%ld", ft_strlen("rodrigo"));
	return (0);
} */