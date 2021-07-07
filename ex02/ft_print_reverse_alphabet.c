#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char zeta;

	zeta = 'z';
	while (zeta >= 'a')
	{
	
		write(1, &zeta, 1);
		--zeta;

	}

}



