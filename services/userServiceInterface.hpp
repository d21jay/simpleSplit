#ifndef USINTERFACE
#define USINTERFACE
#include<string>
using namespace std;
class UserServiceInterface{
public:
  virtual void createUser(string userId, string name){}
  virtual int getUserBalance(string userId) = 0;
  virtual void addGroupBal(string userId, string groupId, int bal){}
};
#endif
