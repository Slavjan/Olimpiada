#include "stdafx.h"
#include "polyangle.h"

using namespace std;
int main()
{
	
	// A, B, C, D;
	Edge line[3];
	
	/*A.x = 1;
	A.y = 2;
	B.x = 4;
	B.y = 2;*/

	Point C;
		  C.x = 2;
		  C.y = 3;

	line[0].setPoints(2, 4, 1, 4);
	line[0].calculateAngle();
	line[1].setPoints(4, 4, 4, 3);
	line[1].calculateAngle();
	line[2].setPoints(4, 2, 3, 1);
	line[2].calculateAngle();
	
	
	Polyangle a(line);

	char s[1]; 
	if (a.prenadleznost(C))
	{
		s[0] = 't';
	}
	else
	{
		s[0] = 'f';
	}

	cout << s[0] << endl;

	
	system("pause");

	return 0;
}