//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include "IPaymentCash.h"

class CashSender {
    IPaymentCash* processPaymentCash;
public:
    CashSender(IPaymentCash*);

    virtual ~CashSender();

    std::string sendPayment() const;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
