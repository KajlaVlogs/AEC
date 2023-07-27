#include <stdio.h>

struct rect
{
    float a;
    float p;
};
struct rect area_perim(float l, float b)
{
    struct rect result;
    result.a = l * b;
    result.p = 2 * (l + b);
    return result;
}

int main()
{
    float l = 5.0;
    float b = 3.0;
    struct rect result = area_perim(l, b);
    printf("Area is %f\n", result.a);
    printf("Perimeter is %f\n", result.p);
    return 0;
}