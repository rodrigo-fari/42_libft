/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:14:49 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/10 18:15:02 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d", ft_isalpha("aaaAAAXX"));
	return (0);
} 
 */