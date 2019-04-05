/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaboujna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:18:39 by kaboujna          #+#    #+#             */
/*   Updated: 2018/12/16 01:18:40 by kaboujna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strslen(char *str, char *s)
{
	int		len;

	len = 0;
	while (*str)
	{
		if (!ft_isintab(s, *str))
			len++;
		str++;
	}
	return (len);
}