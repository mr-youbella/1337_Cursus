/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:30:11 by youbella          #+#    #+#             */
/*   Updated: 2023/12/17 18:30:12 by youbella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int u)
{
	if (u >= 'a' && u <= 'z')
		return (u - 32);
	return (u);
}