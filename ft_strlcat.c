/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsailor <bsailor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:45:35 by bsailor           #+#    #+#             */
/*   Updated: 2021/04/20 16:41:55 by bsailor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	if (ft_strlen(dst) > size)
		return (ft_strlen(src) + size);
	else
	{
		i = ft_strlen(dst);
		i += ft_strlcpy(dst + i, src, size - i);
		return (i);
	}
}
