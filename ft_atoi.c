/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhakim <hhakim@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:23:45 by hhakim            #+#    #+#             */
/*   Updated: 2022/11/04 20:22:34 by hhakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_checks(const char *s)
{
	while ((*s == '+') || (*s == '-'))
	{
		if ((*(s + 1) == '+') || (*(s + 1) == '-'))
			return (0);
		return (1);
		s++;
	}
}

int	ft_isspace(char c)
{
	if (c == ' ')
		return (1);
	if ((c >= '\t') && (c <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	while ()
}

/*
int atoi( const char *c ) {
    int value = 0;
    int sign = 1;
    if( *c == '+' || *c == '-' ) {
       if( *c == '-' ) sign = -1;
       c++;
    }
    while ( isdigit( *c ) ) {
        value *= 10;
        value += (int) (*c-'0');
        c++;
    }
    return value * sign;
}*/