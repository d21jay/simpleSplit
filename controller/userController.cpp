#include "userController.hpp"
void UserController::addUser(string userId, string name){
  UserServiceInterface* usi = this->userFactory->resService((UserType) user);
  if(usi != NULL) {
    usi->createUser(userId, name);
  }
}
int UserController::getUserBalance(string userId){
  UserServiceInterface* usi = this->userFactory->resService((UserType) user);
  if(usi != NULL) {
    return usi->getUserBalance(userId);
  }
  else return 0;
}
void UserController::addGroupBal(string userId, string groupId, int bal){
  UserServiceInterface* usi = this->userFactory->resService((UserType) user);
  if(usi != NULL) {
    usi->addGroupBal(userId, groupId, bal);
  }
}
