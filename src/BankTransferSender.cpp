//
// Created by Maikol Guzman on 8/24/20.
//

#include "BankTransferSender.h"

BankTransferSender::BankTransferSender(IPaymentBankTransfer *pay) : processBankTransfer(pay) {}

BankTransferSender::~BankTransferSender() { delete processBankTransfer; }

std::string BankTransferSender::sendPayment() const {
    return processBankTransfer->processPaymentBankTransfer();
}