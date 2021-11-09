/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijmari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:54:22 by ijmari            #+#    #+#             */
/*   Updated: 2021/11/09 12:54:23 by ijmari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;
	int		len;
	int		j;

	len = ft_strlen(s);
	temp = (char *) malloc (len + 1);
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		temp[j++] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
