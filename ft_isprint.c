/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:37:33 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/10 18:37:34 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d", ft_isprint("aaaAAAXX"));
	return (0);
} 
 */