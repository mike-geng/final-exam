#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int countLine(char *pName);
int countChar(char *pName);
/**
 *  This is the main function which calls
 *  the other functions that I have
 *  implemented.
 */
int main()
{
    char inp[50];
    char inp2[50];
    cin.getline(inp, 50);
    cin.getline(inp2, 50);
    cout << "Line Count: " << countLine(inp) << endl;
    cout << "Character Count: " <<  countChar(inp2) << endl;
}

/**
 * This function takes an input of an array of
 * characters and outputs the number of lines
 * in the input.
 */
int countLine(char *pName)
{
  int j = 1;
  for(int i = 0; pName[i] != '\0'; ++i)
  {
    if(pName[i] == '\n')
      ++j;
  }
  return j;
}

/**
 * This function takes an input of an array of
 * characters and outputs the number of characters
 * in the input.
 */
int countChar(char *pName)
{
  int j = 0;
  for(int i = 0; pName[i] != '\0'; ++i)
  {
    if(pName[i] != ' ')
      ++j;
  }
  return j;
}
