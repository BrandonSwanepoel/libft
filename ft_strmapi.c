/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:09:02 by bswanepo          #+#    #+#             */
/*   Updated: 2019/06/07 07:19:25 by bswanepo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;
	int		a;

	i = 0;
	a = 0;
	if (s && f)
	{
		a = ft_strlen((char*)s);
		if (!(p = ft_strnew(a)))
			return (0);
		while (s[i])
		{
			p[i] = f(i, s[i]);
			i++;
		}
		return (p);
	}
	return (0);
}
