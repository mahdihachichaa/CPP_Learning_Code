#include <iostream>
#include <vector>

#include "circle.hpp"
#include "rectangle.hpp"
#include "line_seg.hpp"
#include "line.hpp"
#include "shape.hpp"

std::ostream& operator<<(std::ostream& os, const PointContainer& points){
    os << '[';
    for(const auto& p: points) os << p << ' ';
    return os << ']';
}

void intersect_all(const std::vector<Shape*>& shapes) {
    for(auto iter = shapes.begin(); iter != shapes.end(); ++iter){
        for(auto iter2 = std::next(iter); iter2 != shapes.end(); ++iter2) {
            std::cout << **iter << " intersects " << **iter2 << " in:\t" << (*iter)->intersect(**iter2) << std::endl;
        }
    }
}

int main(int, char**) {
    std::vector<Shape*> some_shapes;
    // test 1
    std::cout << "test1 " << std::endl;

    some_shapes.emplace_back(new Line{{0,4}, {8,0}});
    some_shapes.emplace_back(new LineSegment{{0,0}, {10,10}});
    // test 2
    std::cout << "test2 " << std::endl;
    some_shapes.emplace_back(new LineSegment{{0,2}, {10,2}});

    // test 3
    std::cout << "test3 " << std::endl;
    some_shapes.emplace_back(new Rectangle{{10,-1}, {-10,1}});

    // test 4
    std::cout << "test4 " << std::endl;
    some_shapes.emplace_back(new Circle{{1,1}, 5});
    
    std::cout << "intersect all" << std::endl;
    intersect_all(some_shapes);
    std::cout << "intersect all fin" << std::endl;

    std::cout << "delete" << std::endl;
    for(auto& p: some_shapes) delete p;
}
