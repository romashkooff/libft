/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romashko <romashko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:13:33 by romashko          #+#    #+#             */
/*   Updated: 2024/12/07 23:13:21 by romashko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/get_next_line.h"
#include "../include/libft.h"

int	main(void)
{
	char	*line;
	int		fd;
	int		i;

	fd = open("tests/text.txt", O_RDONLY);
	i = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			break ;
		}
		i++;
		ft_printf("This is line №%d: %s", i, line);
		free(line);
	}
	close(fd);
}
