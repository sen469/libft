/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawa <ssawa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 08:20:58 by ssawa             #+#    #+#             */
/*   Updated: 2025/04/26 08:26:38 by ssawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t number, size_t size)
{
	void	*mlc;

	mlc = (void *)malloc(number * size);
	if (mlc == NULL)
	{
		return (NULL);
	}
	ft_memset(mlc, 0, size);
	return (mlc);
}
