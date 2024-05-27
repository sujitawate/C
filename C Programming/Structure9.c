#include<stdio.h>

struct Hello
{
    int No;
    int x;
    
    struct Demo
    {
        int i;
        float f;
    }dobj1, dobj2;

}hobj;

int main()
{
hobj.No = 10;
hobj.x = 22;

hobj.dobj1.i = 33;
hobj.dobj1.f = 33.22;

hobj.dobj2.i = 55;
hobj.dobj2.f = 378.1;

return 0;
}