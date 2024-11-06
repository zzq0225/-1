#include <bits/stdc++.h>

using namespace std;

class Vector {
	private:

		double x;
		double y;

	public:

		Vector(double xx, double yy) {
			x = xx, y = yy;
		}


		Vector add(const Vector &other) const {
			return Vector(x + other.x, y + other.y);
		}


		void print() const {
			cout << "fenliang: x = " << x << ", y = " << y << endl;
		}


		void dir() const {
			double mo = sqrt(x * x + y * y);
			cout << "mo: " << mo << endl;
		}
};

int main() {
	Vector v1(3.0, 4.0);
	Vector v2(1.0, 2.0);


	Vector v3 = v1.add(v2);
	v3.print();


	v3.dir();
	v1.print();
	v2.print();
	return 0;
}
