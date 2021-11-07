#ifndef _RED_H
#define _RED_H
#include <DrawAPI.h>

class Red :public DrawAPI
{
public:
	virtual void Draw(int x, int y, int w, int h) override;
};

#endif //_RED_H
