/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 15:16:31 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/05 08:58:18 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		c;
	int		i;
	char	*s2;

	c = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char*)malloc(sizeof(*s2) * (i + 1));
	if (s2 == NULL)
		return (NULL);
	while (c < i)
	{
		s2[c] = s1[c];
		c++;
	}
	s2[c] = '\0';
	return (s2);
}
