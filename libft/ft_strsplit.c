/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 12:45:33 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/15 11:25:52 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	cnt1;
	size_t	cnt2;
	size_t	start;
	char	**str;

	cnt1 = 0;
	cnt2 = 0;
	if (!s)
		return (0);
	str = (char**)malloc(sizeof(str) * ft_strlen(s));
	if (!str)
		return (NULL);
	while (cnt1 < ft_strlen(s))
	{
		while (s[cnt1] && s[cnt1] == c)
			cnt1++;
		start = cnt1;
		while (s[cnt1] && s[cnt1] != c)
			cnt1++;
		if (start < cnt1)
			str[cnt2++] = ft_strsub(s, start, (cnt1 - start));
		str[cnt2] = 0;
	}
	return (str);
}
