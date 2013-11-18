//
//  Triangle.cpp
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//



#include "Triangle.h"




void Triangle::affiche()
{
    std::cout << "je suis un triangle !" << std::endl;
}


// auto enregistrement :
bool const Triangle::registered_ = theFactory().registerItem<Triangle>("Triangle");
