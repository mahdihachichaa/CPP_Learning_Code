#pragma once
#include <utility>
#include <ostream>

using Vertex = std::pair<int,int>;

class Polygon
{
friend std::ostream& operator<<(std::ostream& stream, const Polygon& polygon);

public:
   void add_vertex(int a, int b);

   ~Polygon();

   const Vertex& get_vertex(size_t idx) const;

   static int fcn_static() { return 1; }

private:     
    Vertex* _vertices = nullptr;
     size_t _size = 0u;

};

