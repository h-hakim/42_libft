/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:25 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/10 17:18:13 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//concatenate n chars from src to dest return size_t
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	j;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	i = 0;
	if (n < ld)
		return (ls + n);
	j = ld;
	while ((ld < n - 1) && (src[i]))
	{
		dst[j] = src[i];
		j ++;
		i ++;
	}
	dst[j] = 0;
	return (ld + ls);
}
