/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtwitch <rtwitch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 12:58:41 by rtwitch           #+#    #+#             */
/*   Updated: 2021/11/20 12:59:21 by rtwitch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str;
	while (*s1 != '\0' || (char)c == 0)
	{
		if (*s1 == (char)c)
		{
			return (s1);
		}
		s1++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	if (!s1)
		return (0);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		s3[i] = s2[k];
		i++;
		k++;
	}
	s3[i] = '\0';
	return (s3);
}
