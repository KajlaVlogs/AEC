#include<stdio.h>
int area_perim(float length, float width, float area, float *perim)
{
    area = length* width;
    *perim = 2*(length+width);
    return area;
}

int main()
{
    float length = 6.0;
    float width = 2.0;
    float area, perim;
    float Area = area_perim(length, width, area, &perim);
    printf("Area is %0.2f\n", Area);
    printf("Perimeter is %0.2f\n", perim);
    return 0;
}