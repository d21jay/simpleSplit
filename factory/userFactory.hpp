#ifndef USERFAC
#define USERFAC
#include "../services/userService.hpp"
#include "userEnum.hpp"

class UserFactory{
  UserService* userService = new UserService;
public:
  UserServiceInterface* resService(UserType ser);
};
#endif
