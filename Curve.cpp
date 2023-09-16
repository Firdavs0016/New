#include"Curve.h"
Circle::~Circle() {

}
double Circle::ret() const {
	return this->r1;
}
void Circle::get_t(double l) {
	t = l;
}
double Circle::ret_x() {
	x = r1 * sin(t);
	return x;
}
double Circle::ret_y() {
	y = r1 * cos(t);
	return y;
}
double Circle::ret_z() {
	z = 0;
	return z;
}
double Circle::dx() {
	return r1 * cos(t);
}
double Circle::dy() {
	return -r1 * sin(t);
}
double Circle::dz() {
	return 0;
}
std::string Circle::set_c() {
	return "Circle";
}
double Ellipse::ret_x() {
	 return r1 * cos(t);
}
double Ellipse::ret_y() {
	return r2 * sin(t);
}
double Ellipse::ret_z() {
	return 0;
}
double Ellipse::dx() {
	return -r1 * sin(t);
}
double Ellipse::dy() {
	return r2 * cos(t);
}
double Ellipse::dz() {
	return 0;
}
std::string Ellipse::set_c() {
	return "Ellipse";
}
double Helix::ret_x() {
	return r1 * cos(t);
}
double Helix::ret_y() {
	return r1 * sin(t);
}
double Helix::ret_z() {
	return step * t / (8 * atan(1));  //atan(1)=pi/4;
}
double Helix::dx() {
	return -r1 * sin(t);
}
double Helix::dy() {
	return r1 * cos(t);
}
double Helix::dz() {
	return step / (8 * atan(1));
}
std::string Helix::set_c() {
	return "Helix";
}
