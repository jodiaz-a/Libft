/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodiaz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 01:10:59 by jodiaz            #+#    #+#             */
/*   Updated: 2024/04/03 01:25:51 by jodiaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int ft_ascii(int c)
{
    if (c >= 0 && c <= 127)
    return (1);
else
    return (0);
}

/*int main ()
{
    char myCharacter = 'A'; // Puedes cambiar este carácter para probar diferentes valores

    if (isascii(myCharacter)) 
    {
        printf("The character '%c'is ASCII.\n", myCharacter);
    } else {
        printf("The character '%c' is not ASCII.\n", myCharacter);
    }
    return 0;
}