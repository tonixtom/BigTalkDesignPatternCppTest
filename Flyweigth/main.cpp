#include <iostream>

#include <FlyweightFactory.h>
#include <Flyweight.h>
#include <UnsharedConcreteFlyweight.h>

using namespace std;

int main()
{
	int extrinsicstate = 22;

	FlyweightFactory *f = new FlyweightFactory();

	Flyweight *fx = f->GetFlyweight("X");
	fx->Operation(--extrinsicstate);

    Flyweight *fx1 = f->GetFlyweight("X");
    fx1->Operation(--extrinsicstate);

	Flyweight *fy = f->GetFlyweight("Y");
	fy->Operation(--extrinsicstate);

	Flyweight *fz = f->GetFlyweight("Z");
	fz->Operation(--extrinsicstate);

	Flyweight *uf = new UnsharedConcreteFlyweight();
	uf->Operation(--extrinsicstate);

	getchar();
}


