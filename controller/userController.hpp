#ifndef UC_HPP
#define UC_HPP
#include "../services/userServiceInterface.hpp"
#include "../factory/userFactory.hpp"
#include "../factory/userEnum.hpp"
class UserController{
  UserFactory* userFactory = new UserFactory;
public:
  void addUser(string userId, string name);
  int getUserBalance(string userId);
  void addGroupBal(string userId, string groupId, int bal);
};
#endif
