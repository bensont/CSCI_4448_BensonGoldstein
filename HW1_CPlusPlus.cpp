/*
Homework 1 Part 4
Benji Goldstein and Tyler Benson
*/

#include <iostream>
#include <vector>
class Shape {
  public:
    virtual void display() = 0;
    int get_x();
    int get_y();

  protected:
    int _x;
    int _y;
};

class Square: public Shape {
public:
  void display();
};

class Circle: public Shape {
public:
  void display();
};

class Triangle: public Shape {
public:
  void display();
};

int Shape::get_x() {
  return _x;
}

int Shape::get_y() {
  return _y;
}

void Square::display() {
  std::cout << "I'm a SQUARE!" << std::endl;
}

void Circle::display() {
  std::cout << "I'm a CIRCLE!" << std::endl;
}

void Triangle::display() {
  std::cout << "I'm a TRIANGLE!" << std::endl;
}

int main(void) {
  std::vector<Shape*> collection;
  Square tmp_square;
  Circle tmp_circle;
  Triangle tmp_triangle;
  int c_size;
  collection.push_back(&tmp_square);
  collection.push_back(&tmp_circle);
  collection.push_back(&tmp_triangle);
  collection.push_back(&tmp_square);
  collection.push_back(&tmp_circle);
  collection.push_back(&tmp_triangle);
  collection.push_back(&tmp_circle);
  collection.push_back(&tmp_circle);
  c_size = collection.size();
  std::cout << "Size of Collection: " << c_size << std::endl;
  for (int i=0; i<c_size; i++) {
    collection.at(i) -> display();
  }
}
