//
//  Triangle.h
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//

#ifndef __Factory__Triangle__
#define __Factory__Triangle__


#include "Shape.h"
#include "ShapeFactory.h"


#include <iostream>

class Triangle : public Shape{
public:
    void affiche();
    static const bool registered_;

};

#endif /* defined(__Factory__Triangle__) */
