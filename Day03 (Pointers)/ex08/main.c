#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	printf("%d %d %d %d %d\n", ft_atoi("21"), ft_atoi("-21"), ft_atoi("-0"), ft_atoi("1000000"), ft_atoi("709551615"));
}
