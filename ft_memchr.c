/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:35:53 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/07 14:36:18 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*find the index to pointer where the char given as int is located in s
searching only n chars in s*/
void	*ft_memchr(void *s, int c, size_t n)
{
	int	i;

	i = -1;
	while (++i < n)
		if (((unsigned char *)s)[i] == (unsigned char ) c)
			return (s + i);
	return (NULL);
}
