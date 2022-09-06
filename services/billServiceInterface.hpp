#ifndef BSINTERFACE
#define BSINTERFACE
#include<string>
#include<vector>
#include<utility>
using namespace std;
class BillServiceInterface{
public:
  virtual void createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid){}
};
#endif
