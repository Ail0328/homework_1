#include <iostream>
#include "../include/Angle.hpp"
using namespace std;
int main()
{
    cout << "输入一个距离d,单位m" << endl;
    double d;
    cin >> d;
    Angle angle;
    double theta = angle.solver(d);
    if(theta == false)
    {
        cout << "d超出射程,无法计算抬升角度" << endl;
    }
    else
    {
         cout << "抬升角度 = " << theta << " rad" << endl;
         theta = theta* 180/3.1415926;
         cout << "抬升角度 = " << theta << " °" << endl;
    }
   
    return 0;
}