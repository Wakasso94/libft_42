/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s <imaman-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 05:30:24 by imaman-s          #+#    #+#             */
/*   Updated: 2021/10/15 22:29:23 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*new;

	if (!l)
		return (NULL);
	new = ft_lstnew(f(l->content));
	if (!(new))
		return (NULL);
	x = new;
	while (l)
	{
		if (l->next)
		{
			new->next = ft_lstnew(f(l->next->content));
			if (!(new->next))
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
			new = new->next;
		}
		l = l->next;
	}
	new->next = NULL;
	return (x);
}
