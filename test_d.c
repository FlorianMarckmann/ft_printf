#include "ft_printf.h"
#include "./libft/libft.h"
#include <limits.h>
#include <locale.h>

int main(void)
{
    printf("\033[1;41m|-------------------------| (Lancement du test SIGNED DECIMAL en cours...) |-------------------------|\033[0m\n");
	printf("\033[1;32m|-----| LE VRAI |-----|\033[0m\n");
	//ft_printf("\033[1;31m|-----| LE NOTRE |-----|\033[0m\n");
	//printf("{%d}\n", printf("\033[1;32mTest 1 => \033[0m|%ld|", LONG_MAX));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 1 => \033[0m|%ld|", LONG_MAX));
	//printf("{%d}\n", printf("\033[1;32mTest 2 => \033[0m|%ld|", LONG_MIN));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 2 => \033[0m|%ld|", LONG_MIN));
	printf("{%d}\n", printf("\033[1;32mTest 3 => \033[0m|%4.3i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 3 => \033[0m|%4.3i|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 4 => \033[0m|%-3.1i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 4 => \033[0m|%-3.1i|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 5 => \033[0m|%-4.1i|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 5 => \033[0m|%-4.1i|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 6 => \033[0m|%-4d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 6 => \033[0m|%-4d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 7 => \033[0m|%.d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 7 => \033[0m|%.d|", 42));
	//printf("{%d}\n", printf("\033[1;32mTest 8 => \033[0m|%+d|", 42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 8 => \033[0m|%+d|", 42));
	//printf("{%d}\n", printf("\033[1;32mTest 9 => \033[0m|% d|", 42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 9 => \033[0m|% d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 10 => \033[0m|%d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 10 => \033[0m|%d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 11 => \033[0m|%05.1d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 11 => \033[0m|%05.1d|", 42));
	//printf("{%d}\n", printf("\033[1;32mTest 12 => \033[0m|%05.1zd|", 42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 12 => \033[0m|%05.1zd|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 13 => \033[0m|%-09.5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 13 => \033[0m|%-09.5d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 14 => \033[0m|%-09.3d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 14 => \033[0m|%-09.3d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 15 => \033[0m|%09.2d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 15 => \033[0m|%09.2d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 16 => \033[0m|%.5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 16 => \033[0m|%.5d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 17 => \033[0m|%.5d|", 400000));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 17 => \033[0m|%.5d|", 400000));
	printf("{%d}\n", printf("\033[1;32mTest 18 => \033[0m|%-.5d|", 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 18 => \033[0m|%-.5d|", 42));
	//printf("{%d}\n", printf("\033[1;32mTest 19 => \033[0m|% .5d|", 42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 19 => \033[0m|% .5d|", 42));
	//printf("{%d}\n", printf("\033[1;32mTest 20 => \033[0m|%+.5d|", 42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 20 => \033[0m|%+.5d|", 42));
	printf("{%d}\n", printf("\033[1;32mTest 21 => \033[0m|%.5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 21 => \033[0m|%.5d|", -42));
	printf("{%d}\n", printf("\033[1;32mTest 22 => \033[0m|%-15.5d|", -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 22 => \033[0m|%-15.5d|", -42));
	//printf("{%d}\n", printf("\033[1;32mTest 23 => \033[0m|% .5d|", -42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 23 => \033[0m|% .5d|", -42));
	//printf("{%d}\n", printf("\033[1;32mTest 24 => \033[0m|%+.5d|", -42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 24 => \033[0m|%+.5d|", -42));
	printf("{%d}\n", printf("\033[1;32mTest 25 => \033[0m|%d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 25 => \033[0m|%d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 26 => \033[0m|%+d|", +42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 26 => \033[0m|%+d|", +42));
	//printf("{%d}\n", printf("\033[1;32mTest 27 => \033[0m|%.5hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 27 => \033[0m|%.5hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 28 => \033[0m|%.5hhd|", (char)40));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 28 => \033[0m|%.5hhd|", (char)40));
	//printf("{%d}\n", printf("\033[1;32mTest 29 => \033[0m|%-.5hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 29 => \033[0m|%-.5hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 30 => \033[0m|% .5hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 30 => \033[0m|% .5hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 31 => \033[0m|%+.5hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 31 => \033[0m|%+.5hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 32 => \033[0m|%.5hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 32 => \033[0m|%.5hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 33 => \033[0m|%-.5hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 33 => \033[0m|%-.5hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 34 => \033[0m|% .5hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 34 => \033[0m|% .5hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 35 => \033[0m|%+.5hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 35 => \033[0m|%+.5hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 36 => \033[0m|%15hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 36 => \033[0m|%15hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 37 => \033[0m|%15hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 37 => \033[0m|%15hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 38 => \033[0m|%1hhd|", (char)400000));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 38 => \033[0m|%1hhd|", (char)400000));
	printf("{%d}\n", printf("\033[1;32mTest 39 => \033[0m|%-15.*d|", -4, -42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 39 => \033[0m|%-15.*d|", -4, -42));
	printf("{%d}\n", printf("\033[1;32mTest 40 => \033[0m|%8.4d|", -424242424));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 40 => \033[0m|%8.4d|", -424242424));
	//printf("{%d}\n", printf("\033[1;32mTest 41 => \033[0m|%hd|", (short)33000));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 41 => \033[0m|%hd|", (short)33000));
	//printf("{%d}\n", printf("\033[1;32mTest 42 => \033[0m|%+hhd|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 42 => \033[0m|%+hhd|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 43 => \033[0m|%+hhd|", (char)-42));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 43 => \033[0m|%+hhd|", (char)-42));
	//printf("{%d}\n", printf("\033[1;32mTest 44 => \033[0m|%+hhd|", (char)400000));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 44 => \033[0m|%+hhd|", (char)400000));
	//printf("{%d}\n", printf("\033[1;32mTest 45 => \033[0m|%+hhd|", (char)-400000));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 45 => \033[0m|%+hhd|", (char)-400000));
	//printf("{%d}\n", printf("\033[1;32mTest 46 => \033[0m|%ld|", (long)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 46 => \033[0m|%ld|", (long)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 47 => \033[0m|%lld|", (long long)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 47 => \033[0m|%lld|", (long long)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 48 => \033[0m|%jd|", (__intmax_t)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 48 => \033[0m|%jd|", (__intmax_t)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 49 => \033[0m|%zd|", (size_t)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 49 => \033[0m|%zd|", (size_t)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 50 => \033[0m|%hD|", (short)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 50 => \033[0m|%hD|", (short)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 51 => \033[0m|%hhD|", (char)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 51 => \033[0m|%hhD|", (char)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 52 => \033[0m|%lD|", (long)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 52 => \033[0m|%lD|", (long)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 53 => \033[0m|%llD|", (long long)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 53 => \033[0m|%llD|", (long long)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 54 => \033[0m|%jD|", (__intmax_t)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 54 => \033[0m|%jD|", (__intmax_t)(42)));
	//printf("{%d}\n", printf("\033[1;32mTest 55 => \033[0m|%zD|", (size_t)(42)));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 55 => \033[0m|%zD|", (size_t)(42)));
	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|%10.5d|, |%10.5d|", 0, 0));
	printf("{%d}\n", printf("\033[1;32mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 56 => \033[0m|abcdefg%0.0d|abcde", 012));
	printf("{%d}\n", printf("\033[1;32mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 57 => \033[0m|abcdefg%00.0d|abcde", 0));
	printf("{%d}\n", printf("\033[1;32mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 58 => \033[0m|abcdefg%00.d|abcde", 0));
	printf("{%d}\n", printf("\033[1;32mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 59 => \033[0m|abcdefg%00d|abcde", 0));
	printf("{%d}\n", printf("\033[1;32mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 60 => \033[0m|abcdefg%.d|abcde", 0));
	printf("{%d}\n", printf("\033[1;32mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 61 => \033[0m|abcdefg%.0d|abcde", 0));
	printf("{%d}\n", printf("\033[1;32mTest 62 => \033[0mOKLM"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 62 => \033[0mOKLM"));
	printf("{%d}\n", printf("\033[1;32mTest 63 => \033[0m"));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 63 => \033[0m"));
	printf("{%d}\n", printf("\033[1;32mTest 64 => \033[0m|%05.1d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 64 => \033[0m|%05.1d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 65 => \033[0m|%05.1zd|", 0));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 65 => \033[0m|%05.1zd|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 66 => \033[0m|%09.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 66 => \033[0m|%09.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 67 => \033[0m|%09.3d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 67 => \033[0m|%09.3d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 68 => \033[0m|%09.2d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 68 => \033[0m|%09.2d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 69 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 69 => \033[0m|%.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 70 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 70 => \033[0m|%.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 71 => \033[0m|%-.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 71 => \033[0m|%-.5d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 72 => \033[0m|% .5d|", 0));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 72 => \033[0m|% .5d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 73 => \033[0m|%+.5d|", 0));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 73 => \033[0m|%+.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 74 => \033[0m|%.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 74 => \033[0m|%.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 75 => \033[0m|%-.5d|", 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 75 => \033[0m|%-.5d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 76 => \033[0m|% .5d|", 0));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 76 => \033[0m|% .5d|", 0));
	//printf("{%d}\n", printf("\033[1;32mTest 77 => \033[0m|%+.5d|", 0));
	//ft_printf("{%d}\n", ft_printf("\033[1;31mTest 77 => \033[0m|%+.5d|", 0));
	printf("{%d}\n", printf("\033[1;32mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 78 => \033[0m|%.d, %.0d|", 0, 0));
	printf("{%d}\n", printf("\033[1;32mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 79 => \033[0m|%.d, %.2d|", 0, 0));
	printf("{%d}\n", printf("\033[1;32mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 80 => \033[0m|%.d, %.0d|", 42, 42));
	printf("{%d}\n", printf("\033[1;32mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 81 => \033[0m|%.d, %.2d|", 42, 42));
	printf("{%d}\n", printf("\033[1;32mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));
	ft_printf("{%d}\n", ft_printf("\033[1;31mTest 82 => \033[0m|%d, %d, %d|", 0, -02, 02));
    return (0);
}