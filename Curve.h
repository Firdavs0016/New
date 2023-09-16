#include <cmath>
#include<string>
class Circle{
public:
	Circle(double a) : r1(abs(a)) {}
	double ret() const;
	virtual double ret_x();
	virtual double ret_y(); 
	virtual double ret_z();
	virtual double dx(); virtual double dy(); virtual double dz();
	virtual std::string set_c();
	void get_t(double);
	virtual ~Circle();
protected:
	double x, y, z;
	double r1;
	double t;
};
class Ellipse : public Circle {
public:
	Ellipse(double a, double b) : Circle(a), r2(abs(b)) {}
	double ret_x(); 
	double ret_y(); 
	double ret_z();
	double dx(); double dy(); double dz();
	std::string set_c();
private:
	double r2;
};
class Helix : public Circle {
public:
	Helix(double a, double st): Circle(a), step(st) {}
	double ret_x();
	double ret_y();
	double ret_z();
	double dx(); double dy(); double dz();
	std::string set_c();
private:
	double step;
};
