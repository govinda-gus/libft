/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:10:12 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/09/28 16:18:31 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*n_str;
	int		i;
	int		j;

	if (!str1 || !str2)
		return (0);
	n_str = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!n_str)
		return (0);
	i = 0;
	while (str1[i] != '\0')
	{
		n_str[i] = str1[i];
		i++;
	}
	j = i;
	i = 0;
	while (str2[i] != '\0')
	{
		n_str[j] = str2[i];
		j++;
		i++;
	}
	n_str[j] = '\0';
	return (n_str);
}
