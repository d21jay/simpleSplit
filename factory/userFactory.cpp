#include "userFactory.hpp"

UserServiceInterface* UserFactory::resService(UserType ser){
    switch(ser){
      case user:
        return this->userService;
      break;
      default:
        return NULL;
    }
}
