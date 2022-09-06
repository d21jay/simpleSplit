#include "groupFactory.hpp"

GroupServiceInterface* GroupFactory::resService(GroupType ser){
    switch(ser){
      case group:
        return this->groupService;
      break;
      default:
        return NULL;
    }
}
