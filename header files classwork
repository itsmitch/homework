/*
Write a program that will read the number of computers sold and their unit price, the number of software sold and their unit price, and the number of flash drives sold and their unit price from a file. Your program should then output the following to a file. (use header files for the class and the different functions)
Number of computers                  Total Price of computers
Number of software                      Total price of software
Number of flash drives                  Total price of flash drives
Subtotal
Tax percentage
Total 
*/

#include <iostream>
#include <fstream>
#include "class.h"
#include "fun.h"

using namespace std;

int main()
{
    int items[3];
    double price[3];
    double sales[3];
    ifstream infile;
    ofstream outfile;
    double subt=0, total;
    cl multi;
    cl adder;
    cl taxer;

    infile.open("file.txt");
    outfile.open("outfile.txt");
    int i=0;
    while(!infile.eof())
    {
        infile>>items[i];
        infile>>price[i];
        i++;
    }

    for(int i=0;i<3;i++)
    {
        sales[i]= multi.mult(items[i],price[i]);
    }

    for(int i=0;i<3;i++)
    {
        subt=adder.add(subt,sales[i]);
    }

    total=taxer.tax(7,subt);

    outfile<<items[0]<<" Computers"<<"\t Total price for computers: $"<<sales[0]<<endl;
    outfile<<items[1]<<" Software"<<"\t Total price for software: $"<<sales[1]<<endl;
    outfile<<items[2]<<" Flashdrive"<<"\t Total price for flash: $"<<sales[2]<<endl;
    outfile<<subt<<endl;
    outfile<<"Tax is 7%"<<endl;
    outfile<<total<<endl;

    return 0;
}
