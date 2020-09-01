//
// Created by Maikol Guzman on 8/24/20.
//

#include <Person.h>
#include <BankTransferSender.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment) {
    IPaymentSender *Transfer = new BankTransferSender();
    IPaymentSender *Cash = new CashSender();
    IPaymentSender *Check = new CheckSender();

    Person person;

    EXPECT_EQ(person.processPayment(Transfer),"Sending the money by transference");
    EXPECT_EQ(person.processPayment(Cash),"Give the money in the hands");
    EXPECT_EQ(person.processPayment(Check),"Sending the check with the money");

}