// Implement Rectangle functions here.
#include "Rectangle.h"

Rectangle::Rectangle(float length, float width)
        : _length { length }
        , _width { width }
        {}

Rectangle::Rectangle(float length)
        : Rectangle::Rectangle {length, length}
        {}

Rectangle::Rectangle()
        : Rectangle::Rectangle {_default_size}
        {}

void Rectangle::scale(float ratio) {
        _length *= ratio;
        _width *= ratio;
}

void Rectangle::set_default_size(float value){
    _default_size = value;
}

float Rectangle::_default_size = 0.f;

std::ostream& operator<<(std::ostream& stream, const Rectangle& rectangle){
    return stream << "{ L: " << rectangle.get_length() << ", W: " << rectangle.get_width() << " }";
}