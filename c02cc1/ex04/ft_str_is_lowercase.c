/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narnurul <narnurul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:12:33 by narnurul          #+#    #+#             */
/*   Updated: 2023/11/23 15:18:57 by narnurul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] < 'a' || src[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main()
// {
// 	int ans = ft_str_is_lowercase("sdvsdmvsda");
// 	printf("%d", ans);
// 	return 1;
// }
