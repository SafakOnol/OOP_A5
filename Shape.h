#pragma once
#include <string>

class Shape 
{
public:
    virtual void draw() = 0;
    std::string m_id;
};


