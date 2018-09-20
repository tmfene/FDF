/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 13:41:15 by tmfene            #+#    #+#             */
/*   Updated: 2018/06/12 13:53:51 by tmfene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*ts;

	i = 0;
	if (!s)
		return (0);
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		j--;
	if (j <= 0)
		j = 0;
	ts = (char *)malloc(sizeof(char) * (j + 1));
	if (!ts)
		return (0);
	s += i;
	i = -1;
	while (++i < j)
		ts[i] = *s++;
	ts[i] = '\0';
	return (ts);
}
