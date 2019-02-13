/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_display_file.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: maegaspa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 14:48:05 by maegaspa     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 17:30:02 by maegaspa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "header.h"

#define BUF_SIZE 4096

int		ft_display(char *str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_display(av[1]);
	}
	if (ac > 2)
	{
		ft_putstr2("Too many arguments.\n");
	}
	if (ac < 2)
	{
		ft_putstr2("File name missing.\n");
	}
	return (0);
}
