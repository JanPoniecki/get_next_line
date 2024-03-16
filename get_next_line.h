/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponieck <jponieck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:33:25 by jponieck          #+#    #+#             */
/*   Updated: 2024/03/16 18:13:34 by jponieck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 40
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		count_tools(char *src, char c, int mode);
char	*string_tools(char *src, int mode, int start);
int		cut_copy_string(char *src, int start, char *dest, int size);
char	*check_last(char *line, int *mode_4);
char	*get_from_buffer(char *buffer, int *mode);

#endif
