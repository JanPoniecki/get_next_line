/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:08:46 by jponieck          #+#    #+#             */
/*   Updated: 2024/03/16 17:43:59 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 2];
	int			res;
	char		*line;
	static int	mode;

	if (mode == 0)
		string_tools(buffer, 1, 0);
	while (mode != 5)
	{
		if (count_tools(buffer, 0, 0) == 0)
		{
			string_tools(buffer, 1, 0);
			res = read(fd, buffer, BUFFER_SIZE);
			if (res == 0 || !res)
				return (check_last(line, &mode));
		}
		line = get_from_buffer(buffer, &mode);
		if (mode == 1)
		{
			mode = 3;
			return (line);
		}
	}
	return (NULL);
}
