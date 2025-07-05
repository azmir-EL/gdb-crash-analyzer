#include <stdio.h>

int main(void)
{
    int *ptr = NULL;
    printf("About to crash!\n");

    // 💥 This causes a segmentation fault (SIGSEGV)
    *ptr = 42;

    return 0;
}
