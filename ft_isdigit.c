/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:22:53 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/10 18:23:00 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d", ft_isdigit("123123123321321321"));
	return (0);
}
 */