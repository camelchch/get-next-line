/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saxiao <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 01:27:08 by saxiao            #+#    #+#             */
/*   Updated: 2017/11/25 06:23:44 by saxiao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "get_next_line.h"
#include "../includes/libft.h"

int		get_next_line(const int fd, char **line)
{
	int		i;
	int		j;
	char	*buff;
	static	char stock[BUFF_SIZE];
	char	temp[];

	i = 0;
	j = 0;
	while (stock[i] && stock[i] != '\n')
		i++;
	if (stock[i] == '\n')
	{
		if (!(*line = (char *)malloc(i + 1)))
			return (NULL);
		*line = ft_strncpy(*line, stock, i);
		while (j < BUFF_SIZE && i + 1 < BUFF_SIZE)
			stock[j++] = stock[i++ + 1];
	else
		temp = strncpy(temp, (const char *)stock, BUFF_SIZE);


	if (!(buff = (char *)malloc(BUFF_SIZE)))
		return (-1);
	while (!read(fd, buff,BUFF_SIZE) && !
	if (i = -1)
		return (-1);
	while (j < BUFF_SIZE && buff[i] != '\n')
	{
		i++;
		j++;
	}
	if (buff[i] == '\n')
	{
		temp = ft_strncat(temp, buff, j);
		bzero(stock);
		stock = ft_memcpy(stock, buff + j + 2, BUFF_SIZE - j - 1);

		return (1);
	}
		stock = ft_strncpy(stock, buff, BUFF_SIZE);
}
}
