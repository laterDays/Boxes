#include <iostream>
#include "Settable.h"

int value;

Vector3f::Vector3f(int value)
{
	this->value = value;
}

bool Vector3f::set(Vector3f& vector)
{
    value = vector.value;
    return true;
}

bool Vector3f::equals (Vector3f* vector)
{
	return vector->value = value;
}

int Vector3f::getValue ()
{
    return value;
}
