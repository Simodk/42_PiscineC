/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 03:44:25 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 06:48:46 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			str[i - 1] -= ('a' - 'A');
	return (str);
}
