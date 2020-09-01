#ifndef MY_PROJECT_NAME_IPAYMENTCHECK_H
#define MY_PROJECT_NAME_IPAYMENTCHECK_H

#include <string>

class IPaymentCheck {
public:
    virtual ~IPaymentCheck();

    virtual std::string sendPayment() const = 0;
};


#endif //MY_PROJECT_NAME_IPAYMENTCHECK_H
