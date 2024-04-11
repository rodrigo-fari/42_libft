/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:35:13 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/10 18:35:16 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 0 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/* 
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("%d", ft_isascii("123123123321321321"));
	return (0);
}
 */