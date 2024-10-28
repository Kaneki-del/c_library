/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:20:28 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/26 17:40:35 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char tmp_c;

	tmp_c = (unsigned char)c;
	if (c < 0)
		return 0;
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
