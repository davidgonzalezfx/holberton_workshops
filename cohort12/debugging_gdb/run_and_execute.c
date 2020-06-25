#include <stdio.h>
/* gcc run_and_execute.c -o run_and_execute -g 
 * gdb run_and_execute
 * (gdb) start - run
 * (gdb) continue
 */
int main()
{
    printf("=== Starting program ===\n");

    printf("Some code working...\n");
    printf("Some code working...\n");
    printf("Some code working...\n");

    printf("=== End of program ===\n");

    return 0;
}
