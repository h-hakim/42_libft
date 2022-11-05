/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:35:53 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/02 16:36:48 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s)[i] == (unsigned char ) c)
			return (s + i);
	return (NULL);
}
