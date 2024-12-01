/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:36:59 by oromashk          #+#    #+#             */
/*   Updated: 2024/11/29 21:47:43 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0' && s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	const char	*s;
// 	int			c;

// 	s = "teste";
// 	c = 1024;
// 	ft_strchr(s, c);
// }
