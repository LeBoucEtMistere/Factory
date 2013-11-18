//
//  ShapeFactory.h
//  Factory
//
//  Created by DEPASSE Arthur on 11/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//

#ifndef __Factory__ShapeFactory__
#define __Factory__ShapeFactory__

#include <string>
#include "Shape.h"
#include "Factory.h"


class ShapeFactory : public Factory<std::string,Shape>
{};

inline ShapeFactory& theFactory()
{
    static ShapeFactory fac;
    return fac;   
}

#endif /* defined(__Factory__ShapeFactory__) */
