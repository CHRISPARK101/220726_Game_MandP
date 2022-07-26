#pragma once
#include "actor.h"

class player : public actor
{
public:
	player();
	~player();

	virtual void move() override;
};