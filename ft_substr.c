/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:38:06 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/08 17:06:44 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//allocates memory and create substring starting at index strt for length l
char	*ft_substr(const char *s, unsigned int strt, size_t l)
{
	char	*r;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while ((i < strt) && (s[i]))
		i++;
	r = (char *)malloc(ft_strlen(s)+ (1 - i));
	if (!r)
		return (NULL);
	while ((r[j]) && (r[j] < l))
	{
		r[j] = (char *)s[i];
			i ++;
			j ++;
	}
	r[j] = 0;
	return (r);
}

