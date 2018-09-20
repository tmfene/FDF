/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:48:00 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/08 10:12:53 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*map;

	a = 0;
	if (!s)
		return (0);
	map = (char *)malloc(sizeof(*map) * (ft_strlen(s) + 1));
	if (map == NULL)
		return (NULL);
	while (s[a] != '\0')
	{
		map[a] = f(a, s[a]);
		a++;
	}
	map[a] = '\0';
	return (map);
}
