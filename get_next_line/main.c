/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmorphet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:00:21 by nmorphet          #+#    #+#             */
/*   Updated: 2022/06/23 16:39:59 by nmorphet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main()
{
	int	i;
	char	*line1;
	char	*line2;
	char	*line3;
	int	fd1;
	int	fd2;
	int	fd3;

	i = 1;
	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	printf("\n\nSTARTING\n\n");
	while(1)
	{
		line1 = get_next_line(fd1);
		if (line1)
		{
			printf("file [%d], line [%02d]: %s\n", fd1, i, line1);
		}
		line2 = get_next_line(fd2);
		if(line2)
		{
			printf("file [%d], line [%02d]: %s\n", fd2, i, line2);
		}
		line3 = get_next_line(fd3);
		if(line3)
		{
			printf("file [%d], line [%02d]: %s\n", fd3, i, line3);
		}
		if (!line1 && !line2 && !line3)
			break;
		free(line1);
		free(line2);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return(0);
}

