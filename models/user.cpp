#include "user.hpp"
int User::setUserId(string userId) {
  this->userId = userId;
  return 1;
}
string User::getUserId() {
  return this->userId;
}
void User::setName(string name) {
  this->name = name;
}
string User::getName() {
  return name;
}
void User::addGroupBal(string groupId, int bal){
  this->groups[groupId] += bal;
  this->setBal(this->getBal() + bal);
}
void User::setGroups(unordered_map<string, int> groups){
  this->groups = groups;
}
unordered_map<string, int> User::getGroups(){
  return this->groups;
}
void User::setBal(int bal){
  this->bal = bal;
}
int User::getBal(){
  return this->bal;
}
