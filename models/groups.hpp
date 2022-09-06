#ifndef GROUPS_HPP
#define GROUPS_HPP
#include<string>
#include<utility>
#include<vector>
#include<unordered_set>
using namespace std;
class Groups{
  string groupId;
  unordered_set<string> users;
  vector<string> bills;
public:
  int setGroupId(string groupId);
  string getGroupId();
  void setUsers(unordered_set<string> users);
  void addUser(string userId);
  unordered_set<string> getUsers();
  void setBills(vector<string> bills);
  void addBill(string billId);
  vector<string> getBills();
};
#endif
