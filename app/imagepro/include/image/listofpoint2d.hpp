/*
 Class ListOfPoint2D
*/
#include<vector>
#include "point2D.hpp"

namespace image {
	class ListOfPoint2D{
	private:
		std::vector<Point2D> points;
	public:
		ListOfPoint2D();
		void addPoint(/*const Point2D& point*/);
		int getSize();
		Point2D getPoint(); //segun el archivo point2d
		void showPoints();
	};
}
