#include <iostream>
#include <Shape.h>
#include <Circle.h>
#include <Red.h>

using namespace std;

int main()
{
    std::shared_ptr<DrawAPI> red_test(new Red());
	Shape *ab = new Circle(1,2,3,4,red_test);
//    Shape *ab = new Circle();
	ab->Draw();
}


