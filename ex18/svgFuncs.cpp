#include <fstream>
#include <cstring>
#include "svgFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR void scaleInput(int&, int&, int&, int&);
void scaleInput(double& first, double& second, double& third, double& fourth)
{
  double max = first;
  bool fMax = true, sMax = false, tMax = false, foMax = false;
  if (second > max)
    {
      max = second;
      fMax = false;
      sMax = true;
    }
  if (third > max)
    {
      max = third;
      fMax = false;
      sMax = false;
      tMax = true;
    }
  if (fourth > max)
    {
      max = fourth;
      fMax = false;
      sMax = false;
      tMax = false;
      foMax = true;
    }

  if (fMax)
    {
      second = (second / first) * 400;
      third = (third / first) * 400;
      fourth = (fourth / first) * 400;
      first = 400;
    }
  else if (sMax)
    {
      first = (first / second) * 400;
      third = (third / second) * 400;
      fourth = (fourth / second) * 400;
      second = 400;
    }
  else if (tMax)
    {
      first = (first / third) * 400;
      second = (second / third) * 400;
      fourth = (fourth / third) * 400;
      third = 400;
    }
  else if (foMax)
    {
      first = (first / fourth) * 400;
      second = (second / fourth) * 400;
      third = (third / fourth) * 400;
      fourth = 400;
    }
  
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void calculateMeasurements(double&, double&, double&)
void calculateMeasurements(double input, double& y, double& height)
{
  height = input;
  y = 405 - height;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR void buildChart(double aY, double aHeight, double bY, double bHeight, double cY, double cHeight, double dY, double, ofstream&)
void buildChart(double aY, double aHeight, double bY, double bHeight, double cY, double cHeight, double dY, double dHeight, ofstream& out)
{
  char text[1000];
  strcpy(text, "<?xml version=\"1.0\" standalone=\"no\"?> \n <!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \n \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\"> \n <svg width=\"410\" height=\"410\" \n xmlns=\"http://www.w3.org/2000/svg\"> \n <line x1=\"0\" y1=\"410\" x2=\"410\" y2=\"410\" style=\"stroke:purple;stroke-width:10\"/><line x1=\"0\" y1=\"0\" x2=\"0\" y2=\"410\" style=\"stroke:purple;stroke-width:10\"/><rect x=\"30\" y=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << aY;

  strcpy(text, "\" width=\"70\" height=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << aHeight;

  strcpy(text, "\" style=\"fill:blue;\"/><rect x=\"130\" y=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << bY;

  strcpy(text, "\" width=\"70\" height=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << bHeight;

  strcpy(text, "\" style=\"fill:red;\"/><rect x=\"230\" y=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << cY;

  strcpy(text, "\" width=\"70\" height=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << cHeight;

  strcpy(text, "\" style=\"fill:green;\"/><rect x=\"330\" y=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << dY;

  strcpy(text, "\" width=\"70\" height=\"");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }
  out << dHeight;

  strcpy(text, "\" style=\"fill:grey;\"/></svg>");
  for (int i = 0; text[i] != '\0'; i++)
    {
      out.put(text[i]);
    }

}
//END OF FUNCTION DEFINITION
