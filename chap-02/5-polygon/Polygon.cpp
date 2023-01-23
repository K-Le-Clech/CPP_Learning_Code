#include "Polygon.h"

void Polygon::add_vertex(int n, int m) {
    _vertices.emplace_back(n, m);
}

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon) {
    for (const auto& value : polygon._vertices) {
        stream << "(" << value.first << "," << value.second << ") ";
    }
    return stream;
}

const Vertex& Polygon::get_vertex(int n) const {
    return _vertices[n];
}