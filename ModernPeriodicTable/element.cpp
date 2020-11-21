#include "element.h"

short element::getAtomicno()
{
    return this->atomicno;
}

std::string element::getName()
{
    return this->name;
}

std::string element::getEc()
{
    return this->ec;
}

short element::getGroup()
{
    return this->group;
}

short element::getPeriod()
{
    return this->period;
}

char element::getBlock()
{
    return this->block;
}

float element::getAtomicw()
{
    return this->atomicw;
}

float element::getEn()
{
    return this->en;
}

short element::getAtomicr()
{
    return 0;
}

std::string element::getOrigin()
{
    return std::string();
}

float element::getMeltp()
{
    return 0.0f;
}

float element::getBoilp()
{
    return 0.0f;
}

float element::getDensity()
{
    return 0.0f;
}
