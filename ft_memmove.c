/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s <imaman-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:32:57 by imaman-s          #+#    #+#             */
/*   Updated: 2021/10/15 05:32:59 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*x;
	const unsigned char	*y;

	x = ((unsigned char *)dst);
	y = ((const unsigned char *)src);
	if (x == y)
		return (dst);
	else if (x > y)
	{
		y = y + len - 1;
		x = x + len - 1;
		while (len > 0)
		{
			*x = *y;
			x--;
			y--;
			len--;
		}
	}
	else
		dst = ft_memcpy(x, y, len);
	return (dst);
}
