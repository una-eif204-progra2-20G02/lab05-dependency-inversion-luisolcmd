//
// Created by Maikol Guzman on 8/24/20.
//

#include <Person.h>
#include "gtest/gtest.h"

TEST(TransferTestSuite, VerifyProcessPayment) {
    IPaymentBankTransfer *Transfer = new Person();
    BankTransferSender bankTransferSender(Transfer);
    EXPECT_EQ(bankTransferSender.sendPayment(), "Sending the money by transference");
}

TEST(CashTestSuite, VerifyProcessPayment) {
    IPaymentCash *Cash = new Person();
    CashSender cashSender(Cash);
    EXPECT_EQ(cashSender.sendPayment(), "Give the money in the hands");
}

TEST(CheckTestSuite, VerifyProcessPayment) {
    IPaymentCheck *Check = new Person();
    CheckSender checkSender(Check);
    EXPECT_EQ(checkSender.sendPayment(), "Sending the check with the money");
}