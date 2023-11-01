#ifndef CUSTOMERSESSION_H
#define CUSTOMERSESSION_H

#include "TabStore.h"
#include "Tab.h"
#include "Restaurant.h"
#include "Bill.h"
#include "SingleBill.h"
#include "SplitBill.h"
#include "OrderBuilder.h"

#include <map>
#include <string>
#include <iostream>

using namespace std;

class CustomerSession{
    private:
        double total;
        OrderBuilder* tableOrderBuilder;
        Bill* tableBill;
        string customerName;

    public:
        CustomerSession();
        ~CustomerSession();
        void createOrder(map<string, int> orderDetails); //check what variables we will use for the map
        Order* getOrder();
        void createTab(string name);
        void prepareBill();
        void payBill(double billAmount);
        bool tabExistence(string customerName);
        void setCustomerName(string customerName);
        string getCustomerName();
};
#endif