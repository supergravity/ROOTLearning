#include <iostream>
#include "TF2.h"
#include "TCanvas.h"

int main()
{
    TF2 *f2 = new TF2("f2","sin(x)*sin(y)",0,10,0,10);
    TCanvas *c1 = new TCanvas("c1","",700,500);
    f2 -> Draw();
    c1 -> Print("example_02.png");
    return 0;
}
