#ifndef PEN_H
#define PEN_H
#include<iostream>
#include<string>
class Pen {

std::string pen_name;

 public:

Pen(std::string pen_name = "Pen"){


 this->pen_name = pen_name;

 }


 std::string getName(){

return pen_name;

};

#endif