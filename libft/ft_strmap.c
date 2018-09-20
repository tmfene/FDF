/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 17:29:02 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/18 14:01:38 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		map[a] = f(s[a]);
		a++;
	}
	map[a] = '\0';
	return (map);
}
