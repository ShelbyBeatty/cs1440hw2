//
// Created by Shelby Beatty on 2/4/17.
//

#ifndef ANALYSTCOMPARER_HISTORY_H
#define ANALYSTCOMPARER_HISTORY_H

class History{
public:
    int m_simulationDays;
    int m_seedMoney;
    //PurchaseSale m_purchaseSales;
    int m_purchaseSalesCount;
    int m_currentPurchaseSales;
    int computeTotalProfitLoss();
    int getSimulationDays();
    int getInitialMoney();
    int computeProfitLossPerDay();
   // PurchaseSale nextPurchaseSale();

private:

};


#endif //ANALYSTCOMPARER_HISTORY_H
