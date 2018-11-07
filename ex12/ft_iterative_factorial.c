/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:41:14 by flhember          #+#    #+#             */
/*   Updated: 2018/11/05 19:53:57 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		val;
	int		res;

	res = 1;
	val = 2;
	if (nb < 0)
		return (0);
	else if (nb > 12)
		return (0);
	else
	{
		while (val <= nb)
		{
			res = res * val;
			val++;
		}
	}
	return (res);
}
