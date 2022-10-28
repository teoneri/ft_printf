/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:33:23 by mneri             #+#    #+#             */
/*   Updated: 2022/10/06 15:33:24 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_1;
	int		len_2;
	char	*new_s;

	len_1 = ft_strlen((char *) s1);
	len_2 = ft_strlen((char *)s2);
	new_s = (char *)malloc(sizeof(*s1) * (len_1 + len_2 + 1));
	if (!new_s)
		return (NULL);
	if (len_1 > 0 && len_2 > 0)
	{
		ft_strlcpy(new_s, (char *)s1, len_1 + len_2 + 1);
		ft_strlcat(new_s, (char *)s2, len_2 + len_1 + 1);
	}
	else if (len_1 > 0 && len_2 == 0)
		ft_strlcpy(new_s, (char *)s1, len_1 + len_2 + 1);
	else if (len_2 > 0 && len_1 == 0)
		ft_strlcpy(new_s, (char *)s2, len_2 + len_1 + 1);
	else if (len_1 == 0 && len_2 == 0)
		new_s[0] = 0;
	return (new_s);
}
