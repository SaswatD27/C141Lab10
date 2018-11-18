//point .cpp
#include <iostream>
using namespace std;
// ********************************************************************
//  Declaration of class Point
// ********************************************************************
// class Point represents a two-dimensional point
class Point
{
	public:
	// default class constructor (with no arguments):
	Point(); 
	// class constructor that sets the coordinates x, y to the values xval,
	// yval:
	Point(int xval, int yval);
	// member function for moving a point by dx, dy:
	void Move(int dx, int dy);
	// member functions for getting values of x, y:
	int Get_X() const;
	int Get_Y() const;
	// member functions for setting x, y to xval, yval respectively  
	void Set_X(int xval);
	void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void print();
// private data members x, y represent coordinates of the point:
	private:
	int X;
	int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
	X = 0;
	Y = 0;
}
// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
	X = xval;
	Y = yval;
}
// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
	X += dx;
	Y += dy;
}
// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
	return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
	return Y;
}
// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
	X = xval;
} 
// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
	Y = yval;
} 
    
//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print()
{
	cout<<"("<<X<<","<<Y<<")  ";
}
// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle
{
	private:
	Point a,b,c,d;//where a is the top left point and we move clockwise from a through d
	int size1()
	{
		return b.Get_X()-a.Get_X();
	}
	int size2()
	{
		return b.Get_Y()-c.Get_Y();
	}
// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
	public:
	int area()
	{
		return size1()*size2();
	}
	Rectangle(Point p, Point q)
	{
		d.Set_X(p.Get_X());
		d.Set_Y(p.Get_Y());
		b.Set_X(q.Get_X());
		b.Set_Y(q.Get_Y());
		a.Set_X(d.Get_X());
		a.Set_Y(b.Get_Y());
		c.Set_X(b.Get_X());
		c.Set_Y(d.Get_Y());
	}
	Rectangle()
	{
		d.Set_X(0);
		d.Set_Y(0);
		b.Set_X(1);
		b.Set_Y(1);
		a.Set_X(0);
		a.Set_Y(1);
		c.Set_X(1);
		c.Set_Y(0);
	}
	void print()
	{
		cout<<"The coordinates of the corner points of the rectangle are ";
		a.print();
		b.print();
		c.print();
		d.print();
		cout<<endl;
	}
};
// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
	// Declaring a point using default class constructor (x = y = 0):
	Point p1;
	cout<< "The x value for p1 is " << p1.Get_X() << endl;
	cout<< "The y value for p1 is " << p1.Get_Y() << endl;

	// Declaring a point with coordinates X = 2, Y = 3:
	Point p2(2, 3);
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	// Moving point p2 by (1, -1):
	p2.Move(1, -1);
	cout<< "After the move:" << endl;
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"The coordinates of p1 are ";
	p1.print();
	cout<<endl<<"The coordinates of p2 are ";
	p2.print();
	//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	Rectangle r1;
	Rectangle r2(p1,p2);
	cout<<endl<<"For Rectangle r1 - ";
	r1.print();
	cout<<endl<<"For Rectangle r2 - ";
	r2.print();
	cout<<"Area of the rectangle r1 is "<<r1.area();
	cout<<"Area of the rectangle r2 is "<<r2.area();
	//Au revoir
	return 0;
}

//---------------------- point.cpp ------------------------------------//

