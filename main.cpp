#include <iostream>
#include <string>
using namespace std;
#include <myMacros.h>
//#include <ncurses.h>
unsigned long Delay = 5000000;
int main()
{
    int x=2,y=3,dx=1,speed =0;
    bool end =false;
    string floor(79,'-');
    string hearder = "***  Bouncing Ball  ****",commands ="esc = terminate    ""[+] = speed up [-]=speed down ";
    COLOR(WHITE,BLUE);
    CLS;
    LOCATE(1,25);
    cout<<hearder;
    LOCATE(24,1);
    cout<<floor;
    LOCATE(25,10);
    cout<<commands;
    while(!end)
    {
        LOCATE(y,x);
        cout<<'o'<<endl;
        for(unsigned long wait=0; wait<Delay; ++wait)
            ;
        if(x==1||x==79) dx=-dx;
        if(y==23)
        {
            speed= -speed;
            if(speed==0) speed=-7;
        }
        speed+=1;
        LOCATE(y,x);
        cout<< '\0';
        y+=speed;
        x+=dx;
        initscr();
    cbreak();
    noecho();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);
        if(true)
        {
            switch(getch())
            {
            case '+':
                Delay -= (Delay/5);
                break;
            case '-':
                Delay +=(Delay/5);
                break;
            case ESC:
                end=true;
            }
        }
    }
    NORMAL;
    CLS;
    return 0;
}
