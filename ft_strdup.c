/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:51:39 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/07 20:26:50 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*r;
	int		i;

	if (!s)
		return (NULL);
	r = (char *)malloc(ft_strlen(s + 1));
	if (!r)
		return (NULL);
	i = -1;
	while (i++, s[i])
	{
		r[i] = s[i];
	}
	r[i] = 0;
	return (r);
}
