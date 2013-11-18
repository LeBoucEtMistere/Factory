//
//  main.cpp
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//

#include <iostream>
#include "ShapeFactory.h"



int main(int argc, const char * argv[])
{

    auto triangle = theFactory().create("Triangle");
    auto square = theFactory().create("Square");

    
    if (triangle != nullptr)
        triangle->affiche();
    
    if (square != nullptr)
        square->affiche();
    
    return 0;
}

