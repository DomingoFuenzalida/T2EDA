#include "image/image.hpp"
#include <iostream>
#include <string>

int main(int nargs, char** vargs){
    std::string filename("images/image_1.bmp");
    std::cout << filename << std::endl;
    image::Image* im = nullptr;
    im = image::Image::readImage(filename);
    im->show();

    std::string input = "";
    
    std::cout << "Bienvenido a ImagePRO" << endl;
    
    while input != exit {

    } 


    return 0;
}
