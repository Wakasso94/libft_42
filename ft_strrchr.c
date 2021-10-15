/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s <imaman-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:40:22 by imaman-s          #+#    #+#             */
/*   Updated: 2021/10/15 05:40:25 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			x;

	i = 0;
	x = ((char)c);
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == x)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	if (i == 0)
	{
		if (s[i] == x)
			return (&((char *)s)[i]);
	}
	return (0);
}
