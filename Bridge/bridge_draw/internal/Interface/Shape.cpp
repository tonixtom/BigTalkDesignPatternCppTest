#include "Shape.h"
#include <iostream>

void Shape::Draw() {
    std::cout<<"Shape"<<std::endl;
    return;
}

Shape::Shape(const std::shared_ptr<DrawAPI> &api)
{
    this->api_ = api;
}


