#include "groupController.hpp"

void GroupController::createGroup(string groupId, vector<string> uids, UserController* userController){
  GroupServiceInterface* gsi = this->groupFactory->resService((GroupType) group);
  if(gsi != NULL) {
    gsi->createGroup(groupId, uids);
    for(string uid: uids) {
      userController->addGroupBal(uid, groupId, 0);
    }
  }
}
void GroupController::addBill(string groupId, string billId){
  GroupServiceInterface* gsi = this->groupFactory->resService((GroupType) group);
  if(gsi != NULL) {
    gsi->addBill(groupId, billId);
  }
}
