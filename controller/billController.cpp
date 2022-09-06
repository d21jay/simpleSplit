#include "billController.hpp"

void BillController::createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid, UserController* userController, GroupController* groupController){
  this->billService->createBill(billId, groupId, share, paid);
  groupController->addBill(groupId, billId);
  unordered_map<string, int> calc;
  for(pair<string, int> ub : share) {
    calc[ub.first] -= ub.second;
  }
  for(pair<string, int> ub : paid) {
    calc[ub.first] += ub.second;
  }
  for(unordered_map<string, int>::iterator it = calc.begin(); it != calc.end(); it++) {
    userController->addGroupBal(it->first, groupId, it->second);
  }
}
