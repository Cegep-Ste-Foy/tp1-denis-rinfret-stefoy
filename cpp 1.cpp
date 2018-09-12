
#include <iostream>

std::cout << "Allo\n";

class Point2 {
public:
    Point2(int x, int y);
    int getX();
    int getY();
    ~Point2();
private:
    int x;
    int y;
}

Point2::Point2(int x, int y) {
    this->x = x;
    this->y = y;
}

int Point2::getX() {
    return x;
}

int Point2::getY() {
    return y;
}

Point2::~Point2() {}

Point2 p1(4, 5);

std::cout << "(" << p1.getX() << ", " << p1.getY() << ")" << std::endl;
