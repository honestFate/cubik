/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrinida <gtrinida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:38:38 by gtrinida          #+#    #+#             */
/*   Updated: 2022/03/03 15:38:39 by gtrinida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int character)
{
	return (character >= 32 && character <= 126);
}
