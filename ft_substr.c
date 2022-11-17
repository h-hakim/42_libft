/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:06 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/17 13:45:12 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocates memory and create substring starting at index st for length l;
//See the note below for tests
char	*ft_substr(const char *s, unsigned int st, size_t l)
{
	char			*dst;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	dst = (char *)malloc(l + 1);
	if (!dst)
		return (NULL);
	while (s[i])
	{
		if ((i >= st) && (j < l))
		{
			dst[j] = (char)s[i];
			j ++;
		}
		i ++;
	}
	dst[j] = 0;
	return (dst);
}

// if (st > (unsigned int) ft_strlen(s))
// 	return ("");
/*I am using the francinette test, so with this two lines the uni-test 
failes, with this code 2 cases fails in libfTester*/