#ifndef _CIRCLE_H
#define _CIRCLE_H

#include <Shape.h>
#include <iostream>

class Circle :public Shape
{
public:
    virtual void Draw() override;
    Circle();
    Circle(int x, int y, int w, int h, std::shared_ptr<DrawAPI> const & api);
private:
    int x_;
    int y_;
    int w_;
    int h_;
};

#endif //_CIRCLE_H
