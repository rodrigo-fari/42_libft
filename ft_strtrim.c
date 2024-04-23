/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:03:14 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/23 17:49:49 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}


char	*ft_strtrim(char *s1, char *set)
{
	size_t	s1_size;
	size_t	i;
	size_t	j;
	size_t	temp;

	s1_size = ft_strlen(s1);
	i = 0;
	while (s1)
	{
		while (ft_strcmp(s1[i], set[i]) == 0)
			i++;
	}
	j = s1_size;
	temp = 0;
	while (j > 0)
	{
		while (ft_strcmp(s1[j], set[temp]) == 0)
			j--;
		temp++;
	}
	return (ft_substr(s1, i, ((i + j) - s1_size)));
}
