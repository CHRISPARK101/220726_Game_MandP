#pragma once
#include "actor.h"

class monster : public actor
{
public:
	monster();
	~monster();

	virtual void move() override;

};