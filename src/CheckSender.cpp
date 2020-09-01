//
// Created by Maikol Guzman on 8/24/20.
//

#include "CheckSender.h"

CheckSender::CheckSender(IPaymentCheck *pay) : processPaymentCheck(pay) {}

CheckSender::~CheckSender() {delete processPaymentCheck;}

std::string CheckSender::sendPayment() const {
    return processPaymentCheck->processPaymentCheck();
}