#ifndef UNIT_TESTING_01_GTEST_PERSON_H
#define UNIT_TESTING_01_GTEST_PERSON_H

#include <ostream>
#include "IPaymentBankTransfer.h"
#include "IPaymentCash.h"
#include "IPaymentCheck.h"
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"

/**
 * Abstract Class of Person
 */
class Person : public IPaymentBankTransfer, public IPaymentCash, public IPaymentCheck {
public:

    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);
    virtual ~Person() = default;

    // Gets and Sets
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    std::string processPaymentBankTransfer() const override;
    std::string processPaymentCash() const override;
    std::string processPaymentCheck() const override;

    virtual std::string toString() const; // Virtual
private:
    std::string firstName;
    std::string lastName;
    int documentId;
};

#endif //UNIT_TESTING_01_BASIC_PERSON_H
