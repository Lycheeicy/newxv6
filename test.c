#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int result=info(1);
    printf(1, "Count of processes:%d\n", result);
    result = info(2);
    printf(1, "Totall system calls:%d\n", result);
    result = info(2);
    printf(1, "Totall system calls:%d\n", result);
    result = info(3);
    printf(1, "Number of pages:%d\n", result);
    exit();
}
