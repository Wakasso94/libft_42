/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s <imaman-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:28:43 by imaman-s          #+#    #+#             */
/*   Updated: 2021/10/15 22:47:00 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_save_str(char *digits, char *str)
{
	int	pos;
	int	c;

	pos = 0;
	if (digits[0] == '-')
		str[pos++] = '-';
	c = 10;
	while (c >= 0)
	{
		if (digits[c] != '\0' && digits[c] != '-')
			str[pos++] = digits[c];
		c--;
	}
}

char	*ft_itoa(int n)
{
	int		c;
	char	digits[11];
	char	*str;

	c = 0;
	while (c <= 10)
	{
		if (n < 0)
		{
			if (c == 0)
				digits[c++] = '-';
			digits[c] = '0' + ((n % 10) * -1);
		}
		else if (n == 0 && c != 0)
			digits[c] = '\0';
		else
			digits[c] = '0' + n % 10;
		n /= 10;
		c++;
	}
	str = (char *)ft_calloc(ft_strlen(digits) + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_save_str(digits, str);
	return (str);
}
