#include "DisplayObject.h"


DisplayObject::DisplayObject(const std::string& name): GameObject(name)
{
}

DisplayObject::~DisplayObject()
= default;

/**
 * @return void
 */
void DisplayObject::update()
{

}

/**
 * @return void
 */
void DisplayObject::draw()
{

}

/**
 * @return std::string
 */
std::string DisplayObject::ToString()
{
    
}



/**
 * @return Scene
 */
Scene* DisplayObject::getParent() const
{
    return m_pParent;
}

/**
 * @param scene
 */
void DisplayObject::setParent(Scene* scene)
{
    m_pParent = scene;
}