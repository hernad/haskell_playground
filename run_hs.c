#include <HsFFI.h>

#ifdef __GLASGOW_HASKELL__
#include "hs_fibonacci_stub.h"
extern void __stginit_Fibonacci(void);
#endif

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    hs_init(&argc, &argv);
#ifdef __GLASGOW_HASKELL__
    hs_add_root(__stginit_Fibonacci);
#endif

    i = fibonacci_hs(42);
    printf("Fibonacci: %d\n", i);

    hs_exit();
    return 0;
}

