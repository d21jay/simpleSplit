#include "userController.hpp"
void UserController::addUser(string userId, string name){
  this->userService->createUser(userId, name);
}
int UserController::getUserBalance(string userId){
  return this->userService->getUserBalance(userId);
}
void UserController::addGroupBal(string userId, string groupId, int bal){
  this->userService->addGroupBal(userId, groupId, bal);
}
