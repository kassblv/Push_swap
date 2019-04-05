/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboujna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:20:15 by kaboujna          #+#    #+#             */
/*   Updated: 2018/12/16 01:20:18 by kaboujna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft.h"

typedef struct		s_fd
{
	int				fd;
	char			*stock;
	char			*tmp;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);
t_fd				*get_fd(t_fd **list, const int fd);

#endif
