/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:32:44 by bgales            #+#    #+#             */
/*   Updated: 2023/04/26 15:20:23 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	parse_north_south(char *str, t_game **game)
{
	int		i;
	int		j;
	int		fd;
	char	*tmp;

	i = 1;
	if (str[i++] != 'O')
		print_free_exit("Error\nWrong texture format.\n", game);
	i += iter_whitespace(&str[i]);
	j = iter_no_spaceornl(&str[i]);
	tmp = ft_substr(&str[i], 0, j);
	i += j;
	i += iter_whitespace(&str[i]) + 1;
	if (str[i] != '\0')
		free (tmp);
	if (str[i] != '\0')
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	if (open(tmp, O_RDONLY) < 0)
		free (tmp);
	if (open(tmp, O_RDONLY) < 0)
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	free(tmp);
	close(fd);
}

void	parse_east(char *str, t_game **game)
{
	int		i;
	int		j;
	int		fd;
	char	*tmp;

	i = 1;
	if (str[i++] != 'A')
		print_free_exit("Error\nWrong texture format.\n", game);
	i += iter_whitespace(&str[i]);
	j = iter_no_spaceornl(&str[i]);
	tmp = ft_substr(&str[i], 0, j);
	i += j;
	i += iter_whitespace(&str[i]) + 1;
	if (str[i] != '\0')
		free (tmp);
	if (str[i] != '\0')
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	if (open(tmp, O_RDONLY) < 0)
		free (tmp);
	if (open(tmp, O_RDONLY) < 0)
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	free(tmp);
	close(fd);
}

void	parse_west(char *str, t_game **game)
{
	int		i;
	int		j;
	int		fd;
	char	*tmp;

	i = 1;
	if (str[i++] != 'E')
		print_free_exit("Error\nWrong texture format.\n", game);
	i += iter_whitespace(&str[i]);
	j = iter_no_spaceornl(&str[i]);
	tmp = ft_substr(&str[i], 0, j);
	i += j;
	i += iter_whitespace(&str[i]) + 1;
	if (str[i] != '\0')
		free (tmp);
	if (str[i] != '\0')
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	if (open(tmp, O_RDONLY) < 0)
		free (tmp);
	if (open(tmp, O_RDONLY) < 0)
		print_free_exit("Error\nTexture couldnt be loaded.\n", game);
	free (tmp);
	close(fd);
}

void	parse_texture(t_game **game)
{
	parse_north_south((*game)->north, game);
	parse_north_south((*game)->south, game);
	parse_east((*game)->east, game);
	parse_west((*game)->west, game);
}
