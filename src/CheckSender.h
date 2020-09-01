//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include "IPaymentCheck.h"

class CheckSender {
    IPaymentCheck* processPaymentCheck;
public:
    CheckSender(IPaymentCheck*);

    virtual ~CheckSender();

    std::string sendPayment() const;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
