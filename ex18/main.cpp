#include <fstream>
#include <iostream>
#include "svgFuncs.hpp"

using namespace std;

int main()
{
  double first, second, third, fourth, aY, aHeight, bY, bHeight, cY, cHeight, dY, dHeight;
  ofstream svgFile;

  cout << "Insert 4 non negative numbers: " << endl;
  cin >> first;
  cin >> second;
  cin >> third;
  cin >> fourth;

  svgFile.open("myChart.svg");
  scaleInput(first, second, third, fourth);
  calculateMeasurements(first, aY, aHeight);
  calculateMeasurements(second, bY, bHeight);
  calculateMeasurements(third, cY, cHeight);
  calculateMeasurements(fourth, dY, dHeight);
  buildChart(aY, aHeight, bY, bHeight, cY, cHeight, dY, dHeight, svgFile);
  svgFile.close();
  
  return 0;
}
