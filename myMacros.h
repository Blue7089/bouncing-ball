#ifndef _MYMACROS_
#define _MYMACROS_

#include <iostream>
using namespace std;

#define ABS(a) ((a)>=0?a:(-a))    //absoulte value
#define  MIN(a,b) (a <= b? a : b)  //Minimum vlaue return
#define MAX(a,b)  (a>=b?a:b)       // Max Value return
#define CLS (cout << "\033[2J")     //Clearing screen
#define LOCATE(z,s)(cout<<"\033["<<z<<';'<<s<<'H') //Position of cursor
                          //delay
#define COLOR(r,b)(cout<<"\033[1;3"<<(r) <<";4"<<b<<'m'<<flush) //r is for color of ball and b is for backgound COLOR
//colors
#define BLACK   0
#define red     1
#define GREEN   2
#define YELLOW  3
#define BLUE    4
#define MAGENTA 5
#define CYAN    6
#define WHITE   7
#define INVERS  (cout<<"\033[7m")
#define  NORMAL (cout << "\033[0m")
#define ESC     27
#endif //end of hearder file
