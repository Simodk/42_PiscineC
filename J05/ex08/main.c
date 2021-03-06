/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 08:59:23 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 07:09:26 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *str)
{
	printf("ft_str_is_alpha(%s) => %i\n", str, ft_str_is_alpha(str));
}

int		main(void)
{
	test("Hello");
	printf("________________________________________\n\n");
	test("Hello World");
	printf("________________________________________\n\n");
	test("Hello2");
	printf("________________________________________\n\n");
	test("Hello.");
	printf("________________________________________\n\n");
	test("");
	return (0);
}
