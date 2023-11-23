/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narnurul <narnurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:49:48 by narnurul          #+#    #+#             */
/*   Updated: 2023/11/23 15:20:05 by narnurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') || (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
	}
	return (1);
}

// int	main()
// {
// 	int ans = ft_str_is_alpha("");
// 	printf("%d", ans);
// 	return 0;
// }
