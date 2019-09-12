#include "ft_ls.h"
#include "ft_list_dir.c"

void	ft_exit(const char *message)
{
	if (message != NULL)
		ft_putendl_fd(message, 1);
	exit(1);
}