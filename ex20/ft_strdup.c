/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:41:26 by flhember          #+#    #+#             */
/*   Updated: 2018/11/06 17:01:35 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = 0;
	dest = NULL;
	while (src[len] != '\0')
		len++;
	if ((dest = malloc(sizeof(char) * (len + 1))) == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
