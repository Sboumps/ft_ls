/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbompard <pbompard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:12:52 by pbompard          #+#    #+#             */
/*   Updated: 2014/11/22 18:17:40 by pbompard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*tmp;
	char	*ptr;

	

	if (s1 != NULL && s2 != NULL)
	{
		tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!tmp)
			return (NULL);
		ptr = tmp;
		while (*s1)
			*tmp++ = *s1++;
		while (*s2)
			*tmp++ = *s2++;
		*tmp = '\0';
		return (ptr);
	}
	return (NULL);
}
