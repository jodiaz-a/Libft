/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <jodiaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:35:26 by jodiaz            #+#    #+#             */
/*   Updated: 2024/05/14 16:10:12 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	inword;

	count = 0;
	inword = 0;
	while (*s)
	{
		if (*s == c)
			inword = 0;
		else if (!inword)
		{
			inword = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	*free_strs(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	char	**strs;

	count = ft_count_words(s, c);
	if (!s)
		return (0);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (0);
	strs[count] = NULL;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!strs[i++])
				return (free_strs(strs));
			s += ft_wordlen(s, c);
		}
		else
			s++;
	}
	return (strs);
}
/*int	main(void)
{
	char *message = "Hola, mundo! Esto es una prueba de ft_split.";
	char delimiter = ' '; // Cambia esto al delimitador que desees

	char **result = ft_split(message, delimiter);
	if (!result)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}

	int i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i + 1, result[i]);
		i++;
	}

	// Limpieza de memoria
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	return (0);
}*/
