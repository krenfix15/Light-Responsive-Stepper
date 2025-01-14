#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include "main.h"

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    virtual void analogUpdatePA0(uint32_t value) {}
	
	virtual void analogUpdatePC1(uint32_t value) {}
		
    void bind(Model* m)
    {
        model = m;
    }
	
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
