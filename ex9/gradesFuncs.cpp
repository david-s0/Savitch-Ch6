#include <fstream>
#include <iostream>
#include "gradesFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR void (ifstream&, ofstream&)
void produceResult(ifstream& in, ofstream& out)
{
  char next_char;
  
  bool space = false;
  //open the file
  in.open("grades.txt");
  out.open("results.txt");
  //make sure the file is OK
  if (in.fail())
    {
      cerr << "There was a problem opening the file." << endl;
    }
  
  while (!in.eof())
    {
      in.get(next_char); 
      out.put(next_char);
      if ((next_char == ' ') && space)
	{
	  totalOfGrades(in, out);
	  space = false;
	}
      else if (next_char == ' ')
	{
	  space = true;
	}
    }

  in.close();
  out.close();
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR int totalOfGrades(ifstream&)
void totalOfGrades(ifstream& in, ofstream& out)
{
  char next_char;
  double curr, tot = 0;
  double result;
  
  while (next_char != '\n')
    {
      in.get(next_char);
      if (next_char == '\n')
	{
	  out.put(' ');
	  result = tot / 10;
	  out << std::fixed << result;
	}
      out.put(next_char);
      if (next_char != ' ')
	{
	  curr = static_cast<int>(next_char) - 48;
	  tot += curr;
	}
    }
}
//END OF FUNCTION DEFINITION
