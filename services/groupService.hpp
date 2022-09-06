#ifndef GROUPSERVICE_HPP
#define GROUPSERVICE_HPP
#include "groupServiceInterface.hpp"
#include "../models/groups.hpp"
#include <unordered_map>
class GroupService: public GroupServiceInterface{
  unordered_map<string, Groups*> groupDict;
public:
  void createGroup(string groupId, vector<string> uids);
  void addBill(string groupId, string billId);
};
#endif
