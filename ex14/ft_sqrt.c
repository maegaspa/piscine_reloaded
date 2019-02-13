/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 19:48:34 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 21:45:17 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb / i != i && i <= 46340)
	{
		if (i > nb)
			return (0);
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}