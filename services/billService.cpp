#include "billService.hpp"
void BillService::createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid){
  if(this->billDict.find(billId) == this->billDict.end()) {
    Bills* bill = new Bills;
    bill->setBillId(billId);
    bill->setGroupId(groupId);
    bill->setShare(share);
    bill->setPaid(paid);
    this->billDict.insert({billId, bill});
  }
}
