#include "Rectangle.h"

#include <iostream>

int main()
{
    Rectangle rect(2.f, 4.f);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    rect.scale(3);
    std::cout << "{ L: " << rect.get_length() << ", W: " << rect.get_width() << " }" << std::endl;

    Rectangle square(2.5f);
    std::cout << "{ L: " << square.get_length() << ", W: " << square.get_width() << " }" << std::endl;

    /* some instruction saying that next squares's size will be 3.f */

    Rectangle::set_default_size(2.f);
    Rectangle s1;
    Rectangle s2;

    /* some instruction saying that next squares's size will now be 5.f */
    Rectangle::set_default_size(5.f);
    Rectangle s3;
    Rectangle s4;
    Rectangle s5;

    std::cout << "{ L: " << s1.get_length() << ", W: " << s1.get_width() << " }" << std::endl;
    std::cout << "{ L: " << s2.get_length() << ", W: " << s2.get_width() << " }" << std::endl;
    std::cout << "{ L: " << s3.get_length() << ", W: " << s3.get_width() << " }" << std::endl;
    std::cout << "{ L: " << s4.get_length() << ", W: " << s4.get_width() << " }" << std::endl;
    std::cout << "{ L: " << s5.get_length() << ", W: " << s5.get_width() << " }" << std::endl;

    std::cout << s1 << std::endl;
    // At this point, size of s1 and s2 should be 3.f, and size fo s3, s4 and s5 should be 5.f. 

    return 0;
}
