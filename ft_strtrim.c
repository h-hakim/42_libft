/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:53:36 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/17 13:17:32 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//scan set and returns 1 if it find any identical c in set 0 otherwise
static int	ft_scanset(char c, char const *set )
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

//allocates memory and fill the new string with trimmed data
char	*ft_filltrimmed(unsigned int i, unsigned int j, char const *s1 )
{
	unsigned int	z;
	char			*res;

	z = j - i;
	res = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!res)
		return (NULL);
	while (s1[i] && i < j)
	{
		*res = (char)s1[i];
		i ++;
		res ++;
	}
	*res = '\0';
	res -= z;
	return (res);
}

//trims set of chars from begeining and end of s1,
// returns a new trimmed copy of s1.
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	res = 0;
	i = 0;
	j = ft_strlen(s1);
	if (s1 != 0 && set != 0 && ft_strlen(s1) > 0)
	{
		while (s1[i] && ft_scanset(s1[i], set))
				i ++;
		while (s1[j - 1] && ft_scanset(s1[j - 1], set) && j > i)
				j --;
		res = ft_filltrimmed(i, j, *s1);
		return (res);
	}
	return (res);
}
