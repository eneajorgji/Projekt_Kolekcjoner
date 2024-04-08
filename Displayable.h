#ifndef DISPLAYABLE_H
#define DISPLAYABLE_H

#pragma once
#include <string>

class Displayable
{
public:
	virtual void display() const = 0;
	virtual std::string getDescription() const = 0;
	virtual ~Displayable() {}
};

#endif // DISPLAYABLE_H
