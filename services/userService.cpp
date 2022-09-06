#include "userService.hpp"
void UserService::createUser(string userId, string name){
  if(this->userDict.find(userId) == this->userDict.end()) {
    User* user = new User;
    user->setUserId(userId);
    user->setName(name);
    this->userDict.insert({userId, user});
  }
}
int UserService::getUserBalance(string userId){
  if(this->userDict.find(userId) != this->userDict.end()) {
    return this->userDict[userId]->getBal();
  }
  else return 0;
}
void UserService::addGroupBal(string userId, string groupId, int bal){
  if(this->userDict.find(userId) != this->userDict.end()) {
    return this->userDict[userId]->addGroupBal(groupId, bal);
  }
}
