#include <stdio.h>
int main()
{
    printf("% 10s % 10s % 10s\n", "name", "id", "value");
    printf("% 10s % 10d % 10f\n", "kim", 12, 4.12);
    printf("% 10s % 10d % 10f\n", "lee", "id", 3.21);
    printf("% 10s % 10d % 10.2f\n", "park", "id", 1.0);

    return 0;
}
