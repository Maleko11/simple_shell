/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
    int tmp;

    if (a == NULL || b == NULL)
        return;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
