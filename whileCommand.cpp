//
// Created by amittulman on 19/12/2019.
//

#include "whileCommand.h"
#include "Parser.h"
int whileCommand::execute(vector<string> vec) {
  int i = 0;
  vector<string> newVector;
  while (vec.at(i) != "}") {
    if (i > 2) {
      newVector.push_back(vec.at(i));
    }
    i++;
  }
  // ########### check type of condition
  while (bool con=true) { //send to function to check the condition
    Parser* par = new Parser(newVector);
  }
  return i + 1;
}
