#include <stdio.h>
/* gcc step_by_step.c -o step_by_step -g 
 * gdb step_by_step
 * (gdb) b 26
 * (gdb) start or run
 * (gdb) next - n
 * (gdb) step - s
 */
void some_function(int x)
{
    printf("At function\n");
    printf("x = %d\n", x);
    x = 99;
    printf("x = %d\n", x);
    printf("End of function\n");
}

int main()
{
    printf("=== Starting program ===\n");
    int x = 0;

    printf("-> Breakpoint #1\n");

    printf("Some code working...\n");
    printf("Some code working...\n");
    printf("-> Breakpoint #2\n");
    some_function(x);
    printf("x = %d\n", x);

    printf("=== End of program ===\n");

    return 0;
}
