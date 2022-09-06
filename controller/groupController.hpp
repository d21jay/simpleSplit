#ifndef GC_HPP
#define GC_HPP
#include "../services/groupService.hpp"
#include "userController.hpp"
class GroupController{
  GroupService* groupService = new GroupService;
public:
  void createGroup(string groupId, vector<string> uids, UserController* userController);
  void addBill(string groupId, string billId);
};
#endif
