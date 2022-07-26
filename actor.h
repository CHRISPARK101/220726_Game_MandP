#pragma once
class actor
{
private:
	int x;
	int y;

public:
	actor();
	~actor();

	int hp = 100;

	virtual void move();
};