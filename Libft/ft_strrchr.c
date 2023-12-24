/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:11:57 by youbella          #+#    #+#             */
/*   Updated: 2023/12/18 01:11:57 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;

	lens = ft_strlen(s);
	while (lens != 0)
	{
		if (s[lens] == (char)c)
			return ((char *)s + lens);
		lens--;
	}
	if (s[0] == (char)c)
		return ((char *)s);
	return (NULL);
}
