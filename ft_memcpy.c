/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:57:02 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/10 18:20:08 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n chars from src to dest, returns ptr to dest
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	unsigned const char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned const char *)src;
	while (n--)
		*s1++ = *s2++;
	return (dest);
}
