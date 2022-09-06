#ifndef USERSERVICE_HPP
#define USERSERVICE_HPP
#include<unordered_map>
#include "userServiceInterface.hpp"
#include "../models/user.hpp"
class UserService: public UserServiceInterface {
  unordered_map<string, User*> userDict;
public:
  void createUser(string userId, string name);
  int getUserBalance(string userId);
  void addGroupBal(string userId, string groupId, int bal);
};
#endif
