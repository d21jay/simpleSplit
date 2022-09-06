#ifndef BILLFAC
#define BILLFAC
#include "../services/billService.hpp"
#include "billEnum.hpp"

class BillFactory{
  BillService* billService = new BillService;
public:
  BillServiceInterface* resService(BillType ser);
};
#endif
