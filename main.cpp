#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void displayMainMenu();
void displayAreaMenu();
void displayVolumeMenu();
int getOptionFromUser(int totalOptions);
void handleAreaMenuOption(int option);
void handleVolumeMenuOption(int option);
void calculateAreaOfRectangle();
void calculateAreaOfCircle();
void calculateAreaOfRightTriangle();
void calculateVolumeOfCylinder();
void calculateVolumeOfSphere();


int main()
{
  bool should_continue = true;
  do
  {
    displayMainMenu();
    int option = getOptionFromUser(3);
    switch(option)
    {
      case 1:
      {
        displayAreaMenu();
        int areaOption = getOptionFromUser(3);
        handleAreaMenuOption(areaOption);
      } break;
      
      case 2:
      { 
        displayVolumeMenu();
        int volumeOption = getOptionFromUser(3);
        handleVolumeMenuOption(volumeOption);

      } break;

      case 3:
      {
        should_continue = false;
      } break;
    }
  } while(should_continue);
}

void displayMainMenu()
{
  cout << "-- Main Menu --" << endl;
  cout << "1) Calculate Area" << endl;
  cout << "2) Calculate Volume" << endl;
  cout << "3) Exit Program" << endl;
}

void displayAreaMenu()
{
  cout << "-- Area Menu --" << endl;
  cout << "1) Rectangle" << endl;
  cout << "2) Circle" << endl;
  cout << "3) Right Triangle" << endl;
}

void displayVolumeMenu()
{
  cout << "-- Volume Menu --" << endl;
  cout << "1) Cylinder" << endl;
  cout << "2) Sphere" << endl;
}

int getOptionFromUser(int totalOptions)
{
  int value = 0;
  while(value < 1 || value > totalOptions)
  {
    cout << "Enter option: ";
    cin >> value;
  }
  return value;
}

void handleAreaMenuOption(int option)
{
  switch(option)
  {
    case 1:
    {
      calculateAreaOfRectangle();
    } break;

    case 2:
    {
      calculateAreaOfCircle();
    } break;

    case 3:
    {
      calculateAreaOfRightTriangle();
    } break;
  }
}

void handleVolumeMenuOption(int option)
{
  switch(option)
  {
    case 1:
    {
      calculateVolumeOfCylinder();
    } break;

    case 2:
    {
      calculateVolumeOfSphere();
    } break;

}
}

void calculateAreaOfRectangle()
{
  double width, height;

  cout << "Enter width: ";
  cin >> width;

  cout << "Enter height: ";
  cin >> height;

  double area = width * height;
  cout << "Area of rectangle is " << area << endl;
}

void calculateAreaOfCircle()
{
  double radius;
  double PI = 3.1415;

  cout << "Enter radius: ";
  cin >> radius;

  double area = PI * (radius * radius);
  cout << "Area of circle is " << area << endl;

}

void calculateAreaOfRightTriangle()
{ 
  double base, height;

  cout << "Enter base: ";
  cin >> base;

  cout << "Enter height: ";
  cin >> height;

  double area = (base * height) / 2;
  cout << "Area of right triangle is " << area << endl;

}

void calculateVolumeOfCylinder(){

  double radius, height;
  double PI = 3.1415;

  cout << "Enter radius: ";
  cin >> radius;

  cout << "Enter height: ";
  cin >> height;

  double volume = PI * height * (radius * radius);
  cout << "Volume of cylinder is " << volume << endl;
}

void calculateVolumeOfSphere(){
  double radius;
  double PI = 3.1415;

  cout << "Enter raduis: ";
  cin >> radius;
  
  double volume = (4 * PI * (radius * radius * radius)) / 3;

  cout << "Volume of sphere is " << volume << endl;
}

