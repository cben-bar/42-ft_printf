//ALERTE INFO ==> La fonction write renvoit un int (le nombre de caractere qu'elle a imprime)

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_putc(char c, int printed)
{
	printed = write(1, &c, 1);
	return (printed);
}

int ft_puts(char *str, int printed)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putc(str[i], printed);
		i++;
	}
	return (printed = ft_strlen(str));
}

int	ft_check_format(char c)
{
	char *s;
	int	i;

	s = "cspdiuxX%";
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_printf(const char str, ...)
{
	static int	printed;

	printed = 0;
	w





int main(int ac, char **av)
{
	static int printed;	
	int x;
	int i;
	char *str;

	x = 1;
	printed = 0;
	str = "+moi";
	while (x < ac)
	{ 
		i = 0;
		while (av[x][i])
		{
			printed += write(1, &av[x][i], 1);
			i++;
		}
		x++;
	}
	printed += ft_putc('%', printed);
	printed += ft_puts(str, printed);
	printf("\nprinted = %d\n", printed);
	return (0);
}
