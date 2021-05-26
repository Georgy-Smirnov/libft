/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dellastchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjaco <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:35:12 by kjaco             #+#    #+#             */
/*   Updated: 2021/05/26 14:37:01 by kjaco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_dellastchar(char *str)
{
	int i;

	i = 0;
	while (str[i + 1])
		i++;
	str[i] = 0;
	return (str);
}
