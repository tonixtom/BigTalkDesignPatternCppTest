#ifndef _SHAPE_H
#define _SHAPE_H

#include <DrawAPI.h>
#include <iostream>
#include <tr1/memory>

class Shape
{
public:
    Shape() = default;
    Shape(std::shared_ptr<DrawAPI> const & api);
    virtual void Draw() = 0;

protected:
    std::shared_ptr<DrawAPI> api_;
};

#endif //_SHAPE_H
