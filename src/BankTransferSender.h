//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H

#include "IPaymentBankTransfer.h"

class BankTransferSender : public IPaymentBankTransfer {
public:
    ~BankTransferSender();

    std::string processPaymentBankTransfer() const override;
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
