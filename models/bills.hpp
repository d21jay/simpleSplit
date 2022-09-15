#ifndef BILLS_HPP
#define BILLS_HPP
#include<string>
//#include<utility>
#include<vector>
using namespace std;
class Bills{
  string billId;
  string groupId;
  vector<pair<string, int> > share;
  vector<pair<string, int> > paid;
public:
  int setBillId(string billId);
  string getBillId();
  void setGroupId(string groupId);
  string getGroupId();
  void setShare(vector<pair<string, int> > share);
  vector<pair<string, int> > getShare();
  void setPaid(vector<pair<string, int> > paid);
  vector<pair<string, int> > getPaid();
};
#endif
