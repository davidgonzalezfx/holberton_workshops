#include <stdio.h>
/* gcc line_by_line.c -o line_by_line -g 
 * gdb line_by_line
 * (gdb) start
 * (gdb) next - n
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
