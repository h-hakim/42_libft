/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:37:21 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/08 16:30:02 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//compares n values for two strings(*s, *t, n) 
// return int differnce in first unequal char
int	ft_memcmp(void *s, void *t, size_t n)
{
	int	i;

	i = -1;
	while ((++i < n) && (((unsigned char *)s)[i] == ((unsigned char *)t)[i]))
		if (((unsigned char *)s)[i] == 0)
			return (0);
	return ((((unsigned char *)s)[i]) - (((unsigned char *)t)[i]));
}
