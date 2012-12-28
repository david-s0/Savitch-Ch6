#include <fstream>

using namespace std;

//scale the inputs
void scaleInput(double& first, double& second, double& third, double& fourth);

//calculate the coordinates/height of the bars
void calculateMeasurements(double input, double& y, double& height);

//build graph
void buildChart(double aY, double aHeight, double bY, double bHeight, double cY, double cHeight, double dY, double dHeight, ofstream& out);
