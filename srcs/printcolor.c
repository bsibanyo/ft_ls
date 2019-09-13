

#include "ft_ls.h"

void			ft_folder_color_r(char *ptr)
{
	ft_putstr(CYAN);
	ft_putstr(ptr);
	ft_putstr(STOP);
	ft_putchar('\n');
}

void			ft_exec_color_r(char *ptr)
{
	ft_putstr(RED);
	ft_putstr(ptr);
	ft_putstr(STOP);
	ft_putchar('\n');
}

void			ft_symlinkcolor(t_files *file, t_flags flags)
{
	ft_putstr(MAGENTA);
	ft_putstr(file->name);
	ft_putstr(STOP);
	if (flags.l == TRUE)
		ft_putstr(file->link);
	ft_putchar('\n');
}
