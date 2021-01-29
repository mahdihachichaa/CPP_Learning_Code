#include "Polygon.h"
#include "realloc.h"


void Polygon::add_vertex(int a, int b){
    const auto old_size = _size;
    ++_size;
    _vertices = realloc(_vertices,old_size,_size);
    _vertices[old_size] = Vertex{a,b};

}

Polygon::~Polygon()
{
    delete[] _vertices;
}


const Vertex& Polygon::get_vertex(size_t idx) const{
    return _vertices[idx];
}

std::ostream& operator<<(std::ostream& stream,const Polygon& polyg){
    
    for (size_t i = 0; i < polyg._size; i++)
    {
        const auto& v = polyg._vertices[i];

        stream << "(" << v.first << "," << v.second<< ")";
    }
    
    return stream;
}


int Polygon::fcn_static() { return 1; }