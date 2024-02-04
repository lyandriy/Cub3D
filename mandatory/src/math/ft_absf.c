/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:56:08 by samusanc          #+#    #+#             */
/*   Updated: 2023/11/30 13:32:21 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cub.h>

double	ft_abs2(double x)
{
	if (x < 0)
		x = -x;
	return (x);
}

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
