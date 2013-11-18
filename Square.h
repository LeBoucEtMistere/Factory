//
//  Square.h
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//

#ifndef __Factory__Square__
#define __Factory__Square__

#include "Shape.h"
#include "ShapeFactory.h"

#include <iostream>

class Square : public Shape{
public:
    Square(int const &taille);
    void affiche();
    static const bool registered_;
    
private:
    int m_taille;
};

#endif /* defined(__Factory__Square__) */
