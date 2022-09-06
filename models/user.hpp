#ifndef USER_HPP
#define USER_HPP
#include <string>
#include <unordered_map>

using namespace std;
class User{
  string userId;
  string name;
  unordered_map<string, int> groups;
  int bal = 0;
public:
  int setUserId(string userId);
  string getUserId();
  void setName(string name);
  string getName();
  void addGroupBal(string groupId, int bal);
  void setGroups(unordered_map<string, int> groups);
  unordered_map<string, int> getGroups();
  void setBal(int x);
  int getBal();
};
#endif
