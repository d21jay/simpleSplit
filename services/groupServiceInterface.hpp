#ifndef GSINTERFACE
#define GSINTERFACE
#include<string>
#include<vector>
using namespace std;
class GroupServiceInterface{
public:
  virtual void createGroup(string groupId, vector<string> uids){}
  virtual void addBill(string groupId, string billId){}
};
#endif
