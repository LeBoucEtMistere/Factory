//
//  Square.cpp
//  Factory
//
//  Created by DEPASSE Arthur on 05/11/2013.
//  Copyright (c) 2013 DEPASSE Arthur. All rights reserved.
//



#include "Square.h"

Square::Square(int const &taille)
{
    m_taille = taille;
}


void Square::affiche()
{
    std::cout << "je suis un carré !" << std::endl;
    std::cout << m_taille << std::endl;
}

// auto enregistrement :
bool const Square::registered_ = theFactory().registerItem<Square>("Square", Creator<Square, int>(25)());
