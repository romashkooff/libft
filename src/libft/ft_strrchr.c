/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 19:25:43 by oromashk          #+#    #+#             */
/*   Updated: 2024/11/29 21:49:05 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
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
// 	c = 'e';
// 	ft_strrchr(s, c);
// }
