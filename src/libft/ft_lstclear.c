/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:28:25 by romashko          #+#    #+#             */
/*   Updated: 2024/11/29 21:46:46 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_ptr;

	while (*lst != NULL)
	{
		temp_ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_ptr;
	}
	free(*lst);
	*lst = NULL;
}
