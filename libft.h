/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:41:20 by rde-fari          #+#    #+#             */
/*   Updated: 2024/04/11 20:47:03 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
//____________________________________________//
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//____________________________________________//
int	ft_isalnum(char *str);
int	ft_isalpha(char *str);
int	ft_isascii(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
void ft_memset(void *str, int c, size_t n);
int	ft_strlen(char *str);
void ft_tolower(char *str);
void ft_toupper(char *str);
//____________________________________________//

#endif