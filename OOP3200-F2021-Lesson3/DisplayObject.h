/**
 * Project Untitled
 */


#ifndef _DISPLAYOBJECT_H
#define _DISPLAYOBJECT_H

#include "GameObject.h"


class DisplayObject: public GameObject {
public: 
    Scene m_parent;
    
void draw();
    
std::string ToString();
    
void update();
    
Scene getParent();
    
/**
 * @param scene
 */
void setParent(Scene scene);
};

#endif //_DISPLAYOBJECT_H