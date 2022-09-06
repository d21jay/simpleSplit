#ifndef UC_HPP
#define UC_HPP
#include "../services/userService.hpp"
class UserController{
  UserService* userService = new UserService;
public:
  void addUser(string userId, string name);
  int getUserBalance(string userId);
  void addGroupBal(string userId, string groupId, int bal);
};
#endif
