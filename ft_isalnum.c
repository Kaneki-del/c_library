/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:27:30 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/26 17:51:30 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_isalnum(int c)
{
	unsigned char tmp_c;

	tmp_c = (unsigned char)c;
	if (c < 0 || c >= 255)
		return 0;
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
