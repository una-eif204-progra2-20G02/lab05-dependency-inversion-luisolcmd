//
// Created by Maikol Guzman on 8/24/20.
//

#include <Person.h>
#include "gtest/gtest.h"

TEST(TransferTestSuite, VerifyProcessPayment) {
    IPaymentBankTransfer *Transfer = new Person();
    EXPECT_EQ(Transfer->processPaymentBankTransfer(), "Sending the money by transference");
}

TEST(CashTestSuite, VerifyProcessPayment) {
    IPaymentCash *Cash = new Person();
    EXPECT_EQ(Cash->processPaymentCash(), "Give the money in the hands");
}

TEST(CheckTestSuite, VerifyProcessPayment) {
    IPaymentCheck *Check = new Person();
    EXPECT_EQ(Check->processPaymentCheck(), "Sending the check with the money");
}