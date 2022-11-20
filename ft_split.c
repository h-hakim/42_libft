/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:00:26 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/20 12:13:14 by hhakim           ###   ########.fr       */
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
	char		*s1;
	char		d[2];
	size_t		i;

	d[0] = c ;
	d[1] = 0;
	i = ft_strlen(s);
	s1 = 0;
	if (!s)
		return (NULL);
	if (*s == c || *(s + i - 1) == c)
		s1 = ft_strtrim((const char *)s, (const char *)d);
	return (s1);
}

//scan for the total number of chars that need to be copied.
size_t	ft_counter(char *s, char c)
{
	size_t	counter;
	
	if (!s)
		return (0);
	// printf("s: %s\n", s);
	// return 0;
	counter = 0;
	while (*s != '\0')
	{
		while (*s != c &&  *(s+1) != '\0')
		{			
			counter ++;
			s ++;
		}
		s ++;
	}
	return (counter);
}

//free alloctaed memory 
char	**free_mem(char **res, size_t n)
{
	if (n > 0)
	{
		while (n)
		{
			free(res[n]);
			n --;
		}
	}
	free (res[0]);
	return (NULL);
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
	s1 = 0;

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
			if (!res)
				return (free_mem(res, z));
				z ++;
		}
	}
	res[z] = 0;
	return (res);
}


int	main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split("__str_hellle_dffsdf____", '_');
	if (!tab[0])
		printf("ok\n");
      while (tab[i])
            printf("%s\n", tab[i++]);
	 return 0;
}
