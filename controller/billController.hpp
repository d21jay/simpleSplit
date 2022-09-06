#ifndef BC_HPP
#define BC_HPP
#include "../services/billServiceInterface.hpp"
#include "userController.hpp"
#include "groupController.hpp"
#include "../factory/billFactory.hpp"
#include "../factory/billEnum.hpp"
class BillController{
  BillFactory* billFactory = new BillFactory;
public:
  void createBill(string billId, string groupId, vector<pair<string, int> > share, vector<pair<string, int> > paid, UserController* userController, GroupController* groupController);
};
#endif
