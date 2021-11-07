#include "Circle.h"

void Circle::Draw()
{
    std::cout<<"Draw Circle"<<std::endl;
    if(api_)
        this->api_->Draw(x_,y_,w_,h_);
}

Circle::Circle(int x, int y, int w, int h, const std::shared_ptr<DrawAPI> &api)
{
    this->x_ = x;
    this->y_ = y;
    this->w_ = w;
    this->h_ = h;
    this->api_ = api;
}

Circle::Circle() {
    this->api_ = nullptr;
}