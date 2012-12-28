#include <fstream>
#include "gradesFuncs.hpp"
//#include <iostream>

using namespace std;

int main()
{
  ifstream inFile;
  ofstream outFile;

  produceResult(inFile, outFile);

  return 0;
}
