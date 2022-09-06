#include "billFactory.hpp"

BillServiceInterface* BillFactory::resService(BillType ser){
    switch(ser){
      case bill:
        return this->billService;
      break;
      default:
        return NULL;
    }
}
