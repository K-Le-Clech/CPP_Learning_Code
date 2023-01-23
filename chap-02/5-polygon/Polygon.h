#pragma once

#include <ostream>
#include <vector>
using Vertex = std::pair<int, int>;

class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);

public:
    void add_vertex(int n, int m);
    // std::vector<Vertex> _vertices;
    const Vertex& get_vertex(int n) const;

private:
    // std::vector<std::pair<int, int>> _vertices;

    std::vector<Vertex> _vertices;
};
