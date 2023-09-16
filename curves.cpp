#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include<cstdlib>
#include "curve.h"
using namespace std;
const double t = atan(1);
double sum_r;
void printC(Circle*, double);
bool compare(const Circle *R1, const Circle *R2) {
    return (R1->ret() < R2->ret());
}
int main()
{
    srand(time(nullptr));
    vector<Circle*> a;
    a.resize(rand()/3);  //max rand слишком большой
    vector<Circle*>::iterator pr;
    for (pr = a.begin(); pr != a.end(); pr++) {
        switch (rand()%3)
        {
        case 0: {
            *pr = new Circle(RAND_MAX / rand());
            break;
        }
        case 1: {
            *pr= new Ellipse(RAND_MAX / rand(), RAND_MAX / rand());
            break;
        }
        case 2: {
            *pr  = new Helix(RAND_MAX / rand(), RAND_MAX / rand());
            break;
        }
              
        }
        printC(*pr, t);
    }
    vector <Circle*> b;
    for (pr = a.begin(); pr != a.end(); pr++) {
        if ((*pr)->set_c()=="Circle") {
            b.push_back(*pr);
        }
    }
    sort(b.begin(), b.end(), compare);
    for (pr = b.begin(); pr != b.end(); pr++) {
        sum_r += (*pr)->ret();
    }
}

void printC(Circle* e, double f) {
    e->get_t(f);
    cout << e->set_c() << endl;
    cout << "x = " << e->ret_x() << endl;
    cout << "y = " << e->ret_y() << endl;
    cout << "z = " << e->ret_z() << endl;
    cout << "dx = " << e->dx() << endl;
    cout << "dy = " << e->dy() << endl;
    cout << "dz= " << e->dz() << endl;
}

