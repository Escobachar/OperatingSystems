#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(int argc, char *argv[])
{
    int x = memsize();
    printf("%d\n", x);
    void* y = malloc(20000);
    x = memsize();
    printf("%d\n", x);
    free(y);
    x = memsize();
    printf("%d\n", x);
    exit(0);
}