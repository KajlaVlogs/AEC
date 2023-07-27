#include <iostream>

class Rectangle
{
public:
    float area;
    float perimeter;

    void calculateAreaAndPerimeter(float length, float width)
    {
        area = length * width;
        perimeter = 2 * (length + width);
    }
};

int main()
{
    float length = 5.0;
    float width = 3.0;

    Rectangle rect;
    rect.calculateAreaAndPerimeter(length, width);

    std::cout << "Area is " << rect.area << std::endl;
    std::cout << "Perimeter is " << rect.perimeter << std::endl;

    return 0;
}