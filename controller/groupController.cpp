#include "groupController.hpp"

void GroupController::createGroup(string groupId, vector<string> uids, UserController* userController){
  this->groupService->createGroup(groupId, uids);
  for(string uid: uids) {
    userController->addGroupBal(uid, groupId, 0);
  }
}
void GroupController::addBill(string groupId, string billId){
  this->groupService->addBill(groupId, billId);
}
