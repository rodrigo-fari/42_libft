/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:29:59 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/10 18:30:01 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
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
	printf("%d", ft_isalnum("aaaAAAXX12!!!3"));
	return (0);
} 
 */