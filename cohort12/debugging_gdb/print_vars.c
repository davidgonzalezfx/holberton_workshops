#include <stdio.h>
/* gcc print_vars.c -o print_vars -g 
 * gdb print_vars
 * (gdb) start
 * (gdb) next - n
 * (gdb) print <var_name> - p <var_name>
 * (gdb) display <var_name>
 * (gdb) set var_name = 'value'
 */
void some_function(int x)
{
    printf("At function\n");
    x = 99;
    printf("End of function\n");
}

int main()
{
    printf("=== Starting program ===\n");
    int x = 0;
    int y = 1;

    printf("-> Breakpoint #1\n");

    for (int i = 0; i < 5; i++)
    {
        x++;
        y--;
    }
    
    printf("-> Breakpoint #2\n");
    some_function(x);

    printf("=== End of program ===\n");

    return 0;
}
