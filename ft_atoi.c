/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <ijmari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:06:17 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/04 09:06:18 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if ((c == 32 || c == '\r'
			|| c == '\t' || c == '\n'
			|| c == '\v' || c == '\f'))
		return (1);
	return (0);
}
int handle_maxmin(int temp)
{
	if (temp < -2147483648)
		return (2147483647);
	else if (temp > 2147483647)
		return (-2147483648);
	return (0);
}
int	ft_atoi(const char *str)
{
	int			i;
	int			negative;
	int			temp;

	i = 0;
	negative = 0;
	temp = 0;
	if (temp < -2147483648 || temp > 2147483647)
		temp = handle_maxmin(temp);
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		temp = (str[i] - 48) + (temp * 10);
		i++;
	}
	if (negative == 1)
		temp *= -1;
	return (temp);
}
