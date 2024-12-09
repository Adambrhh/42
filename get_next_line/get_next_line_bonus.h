/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line _bonus.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:39:15 by abarahho          #+#    #+#             */
/*   Updated: 2024/11/29 16:45:04 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

# define FD_MAX 1024

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*fill_buffer(int fd, char *buffer);
char	*extract_line(char *buffer);
char	*save_rest(char *buffer);
char	*join_lines(const char *s1, const char *s2);
size_t	ft_strlen(const char *s);
int		find_nl(const char *buffer);

#endif