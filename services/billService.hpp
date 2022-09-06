#ifndef BILLSERVICE_HPP
#define BILLSERVICE_HPP
#include <unordered_map>
#include "billServiceInterface.hpp"
#include "../models/bills.hpp"
class BillService:public BillServiceInterface{
  unordered_map<string, Bills*> billDict;
public:
  void createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid);
};
#endif
