/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:28:01 by youbella          #+#    #+#             */
/*   Updated: 2023/12/21 14:28:01 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			sum_size;
	unsigned char	*p;

	sum_size = nmemb * size;
	p = malloc(sum_size);
	if (!p)
		return (NULL);
	ft_bzero(p, sum_size);
	return (p);
}
