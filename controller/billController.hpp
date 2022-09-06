#ifndef BC_HPP
#define BC_HPP
#include "../services/billService.hpp"
#include "userController.hpp"
#include "groupController.hpp"
class BillController{
  BillService* billService = new BillService;
public:
  void createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid, UserController* userController, GroupController* groupController);
};
#endif
