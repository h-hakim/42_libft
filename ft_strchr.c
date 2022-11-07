/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:18:38 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/07 17:37:51 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*takes *string and int for char as an input returns the string
where it finds the char c*/
char	*ft_strchr(const char *s, int c)
{
	while ((*s != 0) && ((c > 0) && (c <= 255)))
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}
