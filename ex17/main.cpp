#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  ifstream in;
  int position;
  char inName[30];
  char mName[30];
  char fName[30];
  bool mFound = false, fFound = false;

  cout << "What name are you looking for?" << endl;
  cin.getline(inName, 20);

  in.open("babynames2004.txt");

  while (!in.eof())
    {
      in >> position;
      in.get();
      
      in.getline(mName, 20, ' ');
      if (!strcmp(mName, inName))
	{
	  cout << mName << " is ranked " << position << " in popularity among boys." << endl; 
	  mFound = true;
	}

      in.getline(fName, 20, '\n');
      int slength = strlen(fName);
      fName[slength - 1] = '\0';
      if (!strcmp(fName, inName))
	{
	  cout << fName << " is ranked " << position << " in popularity among girls." << endl; 
	  fFound = true;
	}
    }

  if (!mFound)
    {
      cout << inName << " is not ranked among the top 1000 boy names." << endl;
    }
  if (!fFound)
    {
      cout << inName << " is not ranked among the top 1000 girl names." << endl;
    }

  return 0;
}
