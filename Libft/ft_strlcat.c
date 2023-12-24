/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:05:06 by youbella          #+#    #+#             */
/*   Updated: 2023/12/17 22:05:06 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	sum_len;

	i = 0;
	lend = 0;
	while (dst[lend] && lend < size)
		lend++;
	sum_len = ft_strlen(src) + lend;
	if (size <= lend + 1)
		return (sum_len);
	while (src[i] && lend < size - 1)
	{
		dst[lend] = src[i];
		i++;
		lend++;
	}
	dst[lend] = '\0';
	return (sum_len);
}
