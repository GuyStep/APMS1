//
// Created by amittulman on 17/12/2019.
//
#include "dataManager.h"
#include "client.h"
#include "server.h"
#include "connectCommand.h"
#include "dataManager.h"
#include "Lexer.h"
#include "Parser.h"
#include "openServerCommand.h"
#include "varData.h"

int main() {
  string s = "/home/amittulman/CLionProjects/projectex3/fly.txt";
 /* vector<string> vecLexer = Lexer::split(s);
  dataManager* data = dataManager::getInstance();  //create control manager*/



 //srever try
//  openServerCommand* s1 = new openServerCommand();
//  vector<string> vec = {"5400"};
//  s1->execute(vec);

//client try
 connectCommand* con = new connectCommand();
 vector<string> vec1 = {"127.0.0.1","5402"};
 con->execute(vec1);
};
