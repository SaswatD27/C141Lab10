//include libraries
#include<iostream>
using namespace std;
//declare a class Rectangle
class Rectangle
{
	//in private, declare the data members length and breadth (two int variables)
	private:
	int length,breadth;
	//in public declare two int functions, area() and perimeter() which calculate the area of a rectangle and its perimeter given its length and breadth (values stored in the two aforementioned int variables)
	public:
	//write a void function input to ask the user to input the values of the member variables lenght and breadth of the class Rectangle and to take the said input	
	void input()
	{	
		cout<<"Enter the length of a rectangle - ";
		cin>>length;
		cout<<"Enter the breadth of a rectangle - ";
		cin>>breadth;
	}
	//write an int function area() with the int parameters length and breadth
	int area()
	{
		//return a value equal to the value of length times the value of the breadth
		return length*breadth;
	}
	//write an int function perimeter() with the int parameters length and breadth
	int perimeter()
	{
		//return a value equal to twice the sum of the values of length and breadth
		return 2*(length+breadth);
	}
};
//write the main function
int main()
{
	//declare an object of the class Rectangle, namely r
	Rectangle r;
	//call the member function input() of the class of which r is an object, i.e. Rectangle, to take input of the values of the int variables length and breadth of the object r
	r.input();
	//call the functions area() and perimeter() of the object r and display the results
	int ar=r.area();
	int pm=r.perimeter();
	cout<<"The area of the rectangle is "<<ar;
	cout<<endl<<"The perimeter of the rectangle is "<<pm;
	//compare the values of the area and the perimeter of the rectangle for the length and breadth of which inputs were taken and display the appropriate result
	if(ar>pm)
	cout<<endl<<"The magnitude of the area of the rectangle is more than that of the perimeter.";
	else if(ar<pm)
	cout<<endl<<"The magnitude of the area of the rectangle is less than that of the perimeter.";
	else
	cout<<"The magnitudes of the area and perimeter of the rectangle are equal.";
	//Boa noite
	return 0;
}
