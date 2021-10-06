/**
 * Project Untitled
 */


#ifndef _SCENE_H
#define _SCENE_H

#include "DisplayObject.h"


class Scene: public DisplayObject {
public: 
    std::vector<DisplayObject*> m_pDisplayList;
    
void draw();
    
void update();
    
/**
 * @param child
 */
void addChild(DisplayObject* child);
    
/**
 * @param child
 */
void removeChild(DisplayObject* child);
    
void removeAllChildren();
private: 
    
void updateDisplayList();
    
void drawDisplayList();
};

#endif //_SCENE_H