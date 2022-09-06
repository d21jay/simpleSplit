#include "groups.hpp"

int Groups::setGroupId(string groupId) {
  this->groupId = groupId;
  return 1;
}
string Groups::getGroupId(){
  return this->groupId;
}
void Groups::setUsers(unordered_set<string> users) {
  this->users = users;
}
void Groups::addUser(string userId) {
  this->users.insert(userId);
}
unordered_set<string> Groups::getUsers() {
  return this->users;
}
void Groups::setBills(vector<string> bills) {
  this->bills = bills;
}
void Groups::addBill(string billId){
  this->bills.push_back(billId);
}
vector<string> Groups::getBills() {
  return this->bills;
}
