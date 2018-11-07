/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:02:26 by flhember          #+#    #+#             */
/*   Updated: 2018/11/06 17:21:01 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int		len;
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	if (!(tab = malloc(sizeof(int) * (len))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
