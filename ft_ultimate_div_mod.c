/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:50:01 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/10 16:57:06 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 17;
// 	y = 5;
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	return (0);
// }