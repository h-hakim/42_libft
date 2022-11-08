/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:25 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/08 21:31:25 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this have a problem
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	re;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	re = 0;
	i = 0;
	if (n == 0)
		return (ls);
	if (n > ld)
		re = ld + ls;
	else
		re = ld + n;
	while ((src[i]) && (ld + 1 < n))
	{
		dst[ld] = src[i];
		ld ++;
		i ++;
	}
		dst[ld] = 0;
	return (re);
}

/*strlcat() appends string src to the end of dst.  It will append at most
	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
	dstsize is 0 or the original dst string was longer than dstsize (in prac-
	tice this should not happen as it means that either dstsize is incorrect
	or that dst is not a proper string)

*/