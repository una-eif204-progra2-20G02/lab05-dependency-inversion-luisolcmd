//
// Created by Maikol Guzman on 8/24/20.
//

#include "CashSender.h"

CashSender::CashSender(IPaymentCash *pay) : processPaymentCash(pay) {}

CashSender::~CashSender() { delete processPaymentCash; }

std::string CashSender::sendPayment() const {
    return processPaymentCash->processPaymentCash();
}