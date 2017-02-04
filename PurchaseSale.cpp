//
// Created by Shelby Beatty on 2/4/17.
//

#include "PurchaseSale.h"


    std::string PurchaseSale::getSymbol(){
        return m_symbol;
    };
    int PurchaseSale::getPurchaseDateTime(){
        return m_purchaseDateTime;
    };
    int PurchaseSale::getSalesDateTime(){
        return m_saleDateTime;
    };
    int PurchaseSale::computeInvestmentAmount(){
        int investmentAmount = m_purchaseFee + m_saleFee;
        return investmentAmount;
    };
    int PurchaseSale::computeProfitLoss(){
        int profitLoss = m_salePrice - computeInvestmentAmount();
        return profitLoss;
    };



