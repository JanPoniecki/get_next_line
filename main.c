/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:11:22 by jponieck          #+#    #+#             */
/*   Updated: 2024/03/16 18:59:54 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*res;
	int		i;
	int		bs;

	if (argc > 0)
		fd = open(argv[1], O_RDONLY);
	res = "init";
	i = 0;
	bs = BUFFER_SIZE;
	printf("buffer size is: %d\n\n", bs);
	while (res && i < 14)
	{
		res = get_next_line(fd);
		if (res)
		{
			printf("%s", res);
			printf("--- --- ---\n");
		}
		i++;
		free(res);
	}
}
