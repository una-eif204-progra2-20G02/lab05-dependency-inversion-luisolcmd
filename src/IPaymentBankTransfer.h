#ifndef MY_PROJECT_NAME_IPAYMENTBANKTRANSFER_H
#define MY_PROJECT_NAME_IPAYMENTBANKTRANSFER_H

#include <string>

class IPaymentBankTransfer {
public:
    virtual ~IPaymentBankTransfer();

    virtual std::string sendPayment() const=0;
};

#endif //MY_PROJECT_NAME_IPAYMENTBANKTRANSFER_H