/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 20:34:47 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/10 20:42:31 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	rev_index;
	int	nbr;

	index = 0;
	rev_index = size - 1;
	while (index < rev_index)
	{
		nbr = tab[index];
		tab[index] = tab[rev_index];
		tab[rev_index] = nbr;
		index++;
		rev_index--;
	}
}

// int	main(void)
// {
// 	int	size;

// 	int array_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	// Dividimos o comprimento total do array pelo comprimento
// 	//do elemento que representa cada um dos outros.
// 	size = sizeof(array_int) / sizeof(array_int[0]);
// 	ft_rev_int_tab(array_int, size);
// 	//Para inverter o array, o que eu faço é percorrer o array d
// 	//e da esquerda para a direita e vice-versa e enquanto o índice
// 	//é menor que rev_index, continuaremos iterando.
// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d ", array_int[i]);
// 	}
// 	return (0);
// }