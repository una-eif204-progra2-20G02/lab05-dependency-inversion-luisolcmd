#ifndef MY_PROJECT_NAME_IPAYMENTSENDER_H
#define MY_PROJECT_NAME_IPAYMENTSENDER_H

#include <string>

class IPaymentSender {
public:
    virtual std::string processPayment() const = 0;
    ~IPaymentSender();
};

#endif //MY_PROJECT_NAME_IPAYMENTSENDER_H