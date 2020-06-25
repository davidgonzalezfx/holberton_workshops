#include <stdio.h>
/* gcc arrays.c -o arrays -g 
 * gdb arrays
 * (gdb) start or run
 * (gdb) continue - c
 * (gdb) break <line_of_code>
 * (gdb) next - n
 * (gdb) step - s
 * (gdb) print var_name - p var_name
 * (gdb) display var_name
 */

void mod_idx_1(char arr[], int idx, char new_char)
{
    // print arr[idx]
    arr[idx] = new_char;
    // print arr[idx]
    // print new arr
}

void mod_idx_2(char *arr, int idx, char new_char)
{
    // print arr[idx]
    arr[idx] = new_char;
    // print arr[idx]
    // print new arr
}

int main (void)
{
    char arr1[10] = "Holberton";
    char *arr2 = "School";
    // print arr1
    // print arr2

    mod_idx_1(arr1, 2, 'x');
    // print arr1[2]
    mod_idx_2(arr1, 2, 'x');
    // print arr1
    mod_idx_2(arr2, 2, 'o');
    // print arr2

    printf("End...\n");

    return (0);
}