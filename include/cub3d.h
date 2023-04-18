#ifndef CUB3D_H
#define CUB3D_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft.h"

typedef	struct s_game{
	char	**map;
	char	**ressources;
	char	*floor;
	int		f_rgb[3];
	int		c_rgb[3];
	char 	*ceiling;
	char	*north;
	char	*south;
	char	*west;
	char	*east;
}	t_game;

char	*get_next_line(int fd);
void	print_and_exit(char *str);
void	is_cub(char *map_path);
int		itter_whitespace(char *str);
int		brut_file_size(char *map_path);
int		clean_file_size(char **cub_file);
void	free_char_array(char **array);
void	ressource_parse(t_game **game);
int		in_set(char *set, char c);
void	NULL_all(t_game **game);
int		itter_digit(char *str);
void	parse_ceiling(t_game **game, char *str);
void	parse_floor(t_game **game, char *str);
void	parse_texture(t_game **game);
int		itter_no_spaceornl(char *str);
#endif