/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:21 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/03 20:51:04 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dsize)
{
	size_t	i;

	if (dsize == 0)
		return (NULL);
	i = 0;
	while ((src[i] != 0) && (i < dsize))
	{
		dst[i] = src[i];
		i ++;
	}
		dst[i] = 0;
	return (i);
}

// strlcpy() copies up to dstsize - 1 characters from the string src to dst,
//  NUL-terminating the result if dstsize is not 0.
//  For strlcpy() that means the
/*length of src.  For strlcat() that means the initial length of dst plus
	the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.*/