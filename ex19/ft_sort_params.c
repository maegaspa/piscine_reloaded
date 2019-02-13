/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 16:53:19 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 20:01:54 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	*rev;

	i = 0;
	while (i != ac - 1)
		i++;
	j = i + 1;
	while (i != 0)
	{
		if (ft_strcmp(av[i], av[i - 1]) < 0)
		{
			rev = av[i];
			av[i] = av[i - 1];
			av[i - 1] = rev;
			i = j;
		}
		i--;
	}
	while (++i != ac)
		ft_putstr(av[i]);
	return (0);
}
