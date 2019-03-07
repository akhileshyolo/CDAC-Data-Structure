class Point {

  public:
         Point(double=0.0, double=0.0); // Default constructor
	 Point(const Point&);           // Copy constructor
	 ~Point();			// Destructor
	 Point& operator=(const Point&);  //assignment operator
	 double getX() const;
	 double getY() const;
	 string toString() const;

  private:
   	 double _x, _y;
};
