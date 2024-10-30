/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:54:20 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/30 16:50:29 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char *(ptr);

	ptr = malloc(size * count);
	if (ptr == NULL && (count > 0 && size < 0))
		return (NULL);
	ft_bzero(ptr, (size * count));
	return (ptr);
}

