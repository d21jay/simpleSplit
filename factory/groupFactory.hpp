#ifndef GROUPFAC
#define GROUPFAC
#include "../services/groupService.hpp"
#include "groupEnum.hpp"

class GroupFactory{
  GroupService* groupService = new GroupService;
public:
  GroupServiceInterface* resService(GroupType ser);
};
#endif
