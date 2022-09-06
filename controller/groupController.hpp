#ifndef GC_HPP
#define GC_HPP
#include "../services/groupServiceInterface.hpp"
#include "userController.hpp"
#include "../factory/groupFactory.hpp"
#include "../factory/groupEnum.hpp"
class GroupController{
  GroupFactory* groupFactory = new GroupFactory;
public:
  void createGroup(string groupId, vector<string> uids, UserController* userController);
  void addBill(string groupId, string billId);
};
#endif
