/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narnurul <narnurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:00:24 by narnurul          #+#    #+#             */
/*   Updated: 2023/11/23 15:36:03 by narnurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 48 || str[i] < 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main()
// {
// 	int n = ft_str_is_numeric("111212");
// 	printf("%d", n);
// 	return 0;
// }
