#include <iostream>
//#include <gROOT.h>
#include "TH1F.h"
#include "TF1.h"
#include "TCanvas.h"

int main()
{
    TH1F *h1 = new TH1F("h1","A Random Histogram",100.,0,1); // h1:the variable name for compiler "A ...":the histogram name for user,100: the bin size for the histogram , 0,1, the range of the histogram
    TF1  *f1 = new TF1 ("f1","[0]+[1]*x+[3]*aus(2)"); // f1: the variable name for compiler "[0]... :the form of the fit function" 
    TCanvas *c1 = new TCanvas("c1","",700,500);// c1: the variable name for compiler "":the name for the user ,700: is the canvas size in pixels along X;500:is the canvas size in pixels along Y

    f1 -> SetParameters(2.,-1.0,2.5,0.5,0.05); //set the parameter [0],[1],[2] and gaus(A,mean,sigma) (A is ignored)
    h1 -> FillRandom("f1",2000); //FillRandom ("function name",number of filling )
    h1 -> Fit("f1"); //fit the function for h1 
    h1 -> Draw();
    c1 -> Print("A Random Histogram.png");
    return 0;
}
