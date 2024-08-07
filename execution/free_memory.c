#include "../header.h"

void    ft_free_env(t_data *info, int len)
{
	int     i;

	i = 0;
	while (i < len)
	{
		free(info->env[i]);
		i++;
	}
	free(info->env);
}


void    free_env_new(t_data *info)
{
	int     i;

	i = 0;
	while (info->env[i])
	{
		free(info->env[i]);
		i++;
	}
	free(info->env);
}

void    ft_free_path(t_data *info)
{
	int i;

	i = 0;
	while (info->path[i])
	{
		free(info->path[i]);
		i++;
	}
	free(info->path);
}

void    free_something_after_exit(t_data *info)
{
	free_trash(info->trash);
	free_env_new(info);
	if (info->flag_free_current_path == 1)
		free(info->current_path);
	ft_free_path(info);
}
