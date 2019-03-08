/*******************
 * Header file containing Point Class
 *
 *****************/

class Point{

	public:
		Point(double=0.0, double=0.0); // Default constructor with default values
		Point(const Point &);	// Copy Constructor
		~Point();	// Destructor
		Point& operator=(const Point&); //Assignment Operator
		double getX() const;
		double getY() const;
		string toString() const;
	
	private:
		double _x, _y;

};
