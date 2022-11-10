/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:57:02 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/09 16:44:02 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//copies n chars from src to dest, returns ptr to dest
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = (char *)dest;
	s2 = (const char *)src;
	while (n)
	{
		*s1 = *s2;
		s1 ++;
		s2 ++;
		n --;
	}
	return ((void *)(s2));
}
