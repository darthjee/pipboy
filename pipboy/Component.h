#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    Component() {}
    
    virtual ~Component() {}

    virtual void update() = 0; };

#endif // COMPONENT_H