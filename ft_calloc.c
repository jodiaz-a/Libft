/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:03:35 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/13 18:31:20 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc_d;

	calloc_d = (void *)malloc(count * size);
	if (calloc_d == NULL)
		return (0);
	ft_memset(calloc_d, 0, count * size);
	return (calloc_d);
}
/*int	main(void)
{
	size_t	num_elements = 5;
	size_t	element_size = sizeof(int);
	int		*allocated_memory;

	allocated_memory = (int *)ft_calloc(num_elements, element_size);
	if (allocated_memory == NULL)
	{
		printf("Error: No se pudo asignar memoria.\n");
		return (1);
	}

	// Llena el bloque de memoria con valores (por ejemplo, 42 en este caso)
	for (size_t i = 0; i < num_elements; ++i)
		allocated_memory[i] = 42;

	// Imprime los valores almacenados
	for (size_t i = 0; i < num_elements; ++i)
		printf("allocated_memory[%zu] = %d\n", i, allocated_memory[i]);

	// Libera la memoria asignada
	free(allocated_memory);

	return (0);
}*/