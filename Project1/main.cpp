#include "Point2D.h"

using namespace std;

int main() {

	Point2D firstPoint{ 15, -100 };
	cout << "Coord before: " << firstPoint.x << " " << firstPoint.y << endl;
	cout << "Point located in " << firstPoint.getQuarter() << " quarter" << endl;

	firstPoint.changeCoord(-100, 100);
	cout << "Coord after: " << firstPoint.x << " " << firstPoint.y << endl;
	cout << "Point located in " << firstPoint.getQuarter() << " quarter";

	return 0;
}