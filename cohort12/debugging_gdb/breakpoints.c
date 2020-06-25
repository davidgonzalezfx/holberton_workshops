#include <stdio.h>
/* gcc breakpoints.c -o breakpoints -g 
 * gdb breakpoints
 * (gdb) break 14
 * (gdb) b 18
 * (gdb) b 22
 * (gdb) run
 * (gdb) continue
 */
int main()
{
    printf("=== Starting program ===\n");

    printf("-> Breakpoint #1\n");

    printf("Some code working...\n");
    printf("Some code working...\n");
    printf("-> Breakpoint #2\n");
    printf("Some code working...\n");
    printf("Some code working...\n");

    printf("-> Breakpoint #3\n");

    printf("=== End of program ===\n");

    return 0;
}
