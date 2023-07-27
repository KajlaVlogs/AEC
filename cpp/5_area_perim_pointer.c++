#include <iostream>

float area_perim(const float length, const float width, float area, float *perim)
{
    area = length * width;
    *perim = 2 * (length + width);
    return area;
}

int main()
{
    float length = 6.0;
    float width = 2.0;
    float area, perim;
    float Area = area_perim(length, width, area, &perim);
    std::cout << "Area is " << Area << std::endl;
    std::cout << "Perimeter is " << perim << std::endl;
    return 0;
}
