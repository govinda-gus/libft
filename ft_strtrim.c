/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 14:32:19 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/03 21:56:03 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	if (!str || !set)
		return (0);
	start = 0;
	while (start > 0 && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (end && ft_strchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end + 1));
}
