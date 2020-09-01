#ifndef MY_PROJECT_NAME_IPAYMENTCASH_H
#define MY_PROJECT_NAME_IPAYMENTCASH_H

#include <string>

class IPaymentCash {
public:
    virtual ~IPaymentCash();

    virtual std::string processPaymentCash() const = 0;
};

#endif //MY_PROJECT_NAME_IPAYMENTCASH_H