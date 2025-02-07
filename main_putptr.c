#include "ft_printf.h"

int main(void)
{
    printf(", %d\n", ft_putptr((void *)0));
    printf(", %d\n", ft_putptr((void *)123456));
    printf(", %d\n", ft_putptr((void *)LONG_MIN));
    return (0);
}
