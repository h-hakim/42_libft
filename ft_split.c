/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:26 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/17 23:41:46 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//takes a string *s copies n chars of s to a new string,
// return a ptr to a new s and terminates.
char	*ft_stnrdup(const char *s, size_t n)
{
	char		*r;
	size_t		i;

	i = 0;
	r = (char *)malloc(sizeof(*s) * (n + 1));
	if (!r)
		return (NULL);
	while (s[i] && i < n)
	{
		r[i] = s[i];
		i ++;
	}	
	r[i] = 0;
	return (r);
}

//clean up/trim the string from the edges
char	*ft_trim(const char *s, char c)
{
	char	*s1;
	char	*d;

	d = &c ;
	*(d + 1) = 0;
	s1 = ft_strtrim((const char *)s, (const char *)d);
	if (!s1)
		return (NULL);
	return (s1);
}

//scan for the total number of chars that need to be copied.
size_t	ft_counter(char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		while (*s != c)
		{
			counter ++;
			s ++;
		}
		s ++;
	}
	return (counter);
}

//split a string to strings at delimiter char c. 
// Returns a ptr to ptr to the two split strings (array of arrays).
char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*s1;
	size_t	i;
	size_t	j;
	size_t	z;

	i = 0;
	j = 0;
	z = 0;
	s1 = ft_trim(s, c);
	res = (char **)malloc (sizeof(*s1) * ft_counter(s1, c) + 1);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		i = j;
		while (s1[i] && s1[i] != c)
			i ++;
		if (i > j)
		{
			res[z] = ft_stnrdup(s1 + j, i - j);
				z ++;
		}
	}
	res[z] = 0;
	return (res);
}
