#include "ws1p3.h"
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;

void CLa::ma1(void)
{
cout << "Je travaille pour CLa" << endl;
this->b1.mb();
}
//----------------------------------------------------------------------------
void CLa::ma2(void)
{
cout << "Je travaille pour CLa" << endl;
this->p1 = new CLb();
this->p1->mb();
}
//---------------------------------------------------------------------
void CLa::ma3(CLb ov)
{
cout << "Je travaille pour CLa" << endl;
ov.mb();
}
//----------------------------------------------------------------
void CLa::ma4(CLb& oa)
{
cout << "Je travaille pour CLa" << endl;
oa.mb();
}
//-----------------------------------------------------------------   
void CLa::ma5(CLb* op)
{
cout << "Je travaille pour CLa" << endl;
op->mb();
}
//-----------------------------------------------------------------
void CLb::mb(void)
{
cout << "Je travaille pour CLb" << endl;
}