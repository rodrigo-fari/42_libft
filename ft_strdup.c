/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:51:15 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/18 16:11:37 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dup;

	size = ft_strlen(s);
	dup = malloc((sizeof(char) * size) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	if (i == size)
		dup[i] = '\0';
	return (dup);
}
/* 
int main()
{
	char *str;
 	char *s = "I malloc so I am.";
	ft_strdup(s);
	return (0);
} */