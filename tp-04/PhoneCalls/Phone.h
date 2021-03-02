#pragma once

#include "Person.h"

class Phone
{
public:


	~Phone(){}

	const Person& getOwner() const{
		return _owner;
	}
	virtual void ring() const { _owner.answer_phone(); }

protected:

	Phone(const Person& owner)
	: _owner { owner }
	{}
	const Person& _owner;
};
