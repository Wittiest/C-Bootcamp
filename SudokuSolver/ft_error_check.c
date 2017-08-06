/*
**
*/

int		ft_error_check(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 10)
		return (1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '.')
			{
				if (argv[i][j] < '1' || argv[i][j] > '9')
					return (1);
			}
			j++;
		}
		if (j > 9)
			return (1);
		i++;
	}
	return (0);
}
