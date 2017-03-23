/*** STUDENTS: DO NOT FORGET TO PUT COMMENTS UP HERE
****/


#include <iostream>
#include <fstream>
#include <vector>
#include "std_lib_facilities.h"

using namespace std;

vector<char> getAlphabet(vector<char> alphabet, string FileName)
{
  string language;
  ifstream File;
  File.open (FileName);
  getline(File, language);
  File.close();
  for (int i = 0; i < language.size(); ++i)
    alphabet.push_back(language[i]);
  return alphabet;
}

int getTotalStates(int totalState, string FileName)
{
  string cur;
  ifstream File;
  File.open (FileName);
  int i = 0;
  while (getline(File, cur)) 
  {
    if (i == 1)
	totalState = stoi(cur);
    ++i;
  }
    return totalState;
}

vector<int> getTransitionTable(vector<vector<int> > transitionTable, string FileName)
{
  string cur;
  ifstream File;
  File.open (FileName);
  //XXX
  getline(File, cur);
}
int main ( int argc, char *argv[] )
{
  vector <vector<int> > transitionTable;
  vector <int> finalStates;

  if ( argc != 3 )
  {
    cout<<"usage: "<< argv[0]
	<<" <DFA description filename>  <String list filename> " << endl;
    return 0;
  }

  string DFAfilename = argv[1];
  string stringlistFilename =  argv[2];
  vector<char> alphabet = getAlphabet(alphabet, DFAfilename);
  int totalState = getTotalStates(totalState, DFAfilename);
  cout << "Alphabet: ";
  for (int i = 0; i < alphabet.size(); ++i)
    cout << alphabet[i];
  cout << "" << endl;
  cout << "Total State: " << totalState << endl;
}
