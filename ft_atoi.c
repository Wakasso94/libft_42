/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s <imaman-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:26:40 by imaman-s          #+#    #+#             */
/*   Updated: 2021/10/15 20:00:36 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char s)
{
	if (s == ' ' || s == '\f' || s == '\n' || s == '\r' \
			|| s == '\t' || s == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	size_t	an;

	i = 0;
	n = 1;
	an = 0;
	while (ft_isspace(str[i]) > 0)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		an = (an * 10) + (str[i] - 48);
		i++;
	}
	if (an > 9223372036854775807 && n == 1)
		return (-1);
	if (an > 9223372036854775807 && n == -1)
		return (0);
	return (an * n);
}
