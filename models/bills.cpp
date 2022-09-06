#include "bills.hpp"

int Bills::setBillId(string billId) {
  this->billId = billId;
  return 1;
}
string Bills::getBillId() {
  return this->billId;
}
void Bills::setGroupId(string groupId) {
  this->groupId = groupId;
}
string Bills::getGroupId() {
  return this->groupId;
}
void Bills::setShare(vector<pair<string, int> > share) {
  this->share = share;
}
vector<pair<string, int> > Bills::getShare() {
  return this->share;
}
void Bills::setPaid(vector<pair<string, int> > paid) {
  this->paid = paid;
}
vector<pair<string, int> > Bills::getPaid() {
  return this->paid;
}
