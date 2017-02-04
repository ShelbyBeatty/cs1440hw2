//
// Created by Shelby Beatty on 2/4/17.
//
#include<iostream>
#ifndef ANALYSTCOMPARER_PURCHASESALE_H
#define ANALYSTCOMPARER_PURCHASESALE_H

class PurchaseSale{

public:
    PurchaseSale();
    std::string m_symbol;
    int m_quantity;
    int m_purchaseDateTime;
    int m_purchasePrice;
    int m_purchaseFee;
    int m_saleDateTime;
    int m_salePrice;
    int m_saleFee;
    std::string getSymbol();
    int getPurchaseDateTime();
    int getSalesDateTime();
    int computeInvestmentAmount();
    int computeProfitLoss();
private:



};

#endif //ANALYSTCOMPARER_PURCHASESALE_H
