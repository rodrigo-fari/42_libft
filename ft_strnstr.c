/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:22:35 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/16 19:03:33 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (big[i] && i < len)
	{
		if (i >= len)
			return (NULL);
		if (ft_strncmp(&big[i], little, len) == 0)
			return ((char *)&big[i]);
		i++;	
	}
	return (NULL);
}
