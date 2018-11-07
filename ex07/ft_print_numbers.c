/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:40:38 by flhember          #+#    #+#             */
/*   Updated: 2018/11/05 18:46:30 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char zer;
	char neuf;

	zer = '0';
	neuf = '9';
	while (zer <= neuf)
	{
		ft_putchar(zer);
		zer++;
	}
}
