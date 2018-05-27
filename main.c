#include <stdio.h>
#include <assert.h>

int main()
{
    int x, y, z;
    x = 2;
    y = 2;
    z = x + y - 1;

    assert(z == 3); //Si cambias alguna variable que no de 3 fallara es como unacostante

    printf("%d\n", z);

    return 0;
}
