#include "groupService.hpp"

void GroupService::createGroup(string groupId, vector<string> uids){
  if(this->groupDict.find(groupId) == this->groupDict.end()) {
    Groups* group = new Groups;
    group->setGroupId(groupId);
    for(string x: uids){
      group->addUser(x);
    }
    this->groupDict.insert({groupId, group});
  }
}
void GroupService::addBill(string groupId, string billId){
  if(this->groupDict.find(groupId) != this->groupDict.end()) {
    this->groupDict[groupId]->addBill(billId);
  }
}
