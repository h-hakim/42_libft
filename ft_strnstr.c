/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:50:29 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/04 15:55:21 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_scanneedle(const char *hay, const char *ned, size_t i, size_t j)
{
	int		z;

	z = i;
	while ((hay[i] == ned[j]) && (ned[j]))
	{
		i ++;
		j ++;
	}
	if (!ned[j])
		return (z);
	else
		j = 0;
	return (z = -1);
}

char	*ft_strnstr(const char *hay, const char *ned, size_t l)
{
	size_t		i;
	size_t		j;
	int			z;

	i = 0;
	j = 0;
	z = -1;
	if (ned[j])
	{
		while ((hay[i]) && (i < l))
		{
			if (hay[i] == ned[j])
				z = ft_scanneedle(hay, ned, i, j);
			if (z >= 0)
				return ((char *) hay + z);
			i ++;
		}
		return (NULL);
	}
	return ((char *) hay);
}
