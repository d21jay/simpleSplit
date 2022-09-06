#include "controller/userController.hpp"
#include "controller/groupController.hpp"
#include "controller/billController.hpp"
#include<iostream>
int main(){
  UserController* userController = new UserController;
  GroupController* groupController = new GroupController;
  BillController* billController = new BillController;
  cout<<"apps alive\n";
  cout<<"testing\n";
  userController->addUser("user1", "abc");
  userController->addUser("user2", "xyz");
  userController->addUser("user3", "abc");
  userController->addUser("user4", "abc");
  userController->addUser("user5", "abc");
  cout<<"added 5 users\n";
  vector<string> uids = {"user1", "user2", "user3", "user4"};
  groupController->createGroup("group1", uids, userController);
  cout<<"added group1 of 4 users\n";
  vector<pair<string, int> > share = {{"user1", 300},{"user2", 300},{"user3", 20},{"user4", 180}};
  vector<pair<string, int> > paid = {{"user1", 100},{"user2", 300},{"user3", 300},{"user4", 100}};
  billController->createBill("bill1", "group1", share, paid, userController, groupController);
  cout<<"added bill1\n";
  cout<<"share of user1 : "<<userController->getUserBalance("user1")<<endl;
  cout<<"share of user2 : "<<userController->getUserBalance("user2")<<endl;
  cout<<"share of user3 : "<<userController->getUserBalance("user3")<<endl;
  cout<<"share of user4 : "<<userController->getUserBalance("user4")<<endl;
  cout<<"share of user5 : "<<userController->getUserBalance("user5")<<endl;
  return 0;
}
