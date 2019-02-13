/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 19:49:19 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:23:10 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (0 < nb && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	return (0);
}
