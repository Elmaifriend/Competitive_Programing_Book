#include<iostream>
#include<vector>
using namespace std;

int main(){

    while(true){
        int loanDuration = 0;
        cin >> loanDuration;
        
        double downPayment = 0;
        cin >> downPayment;

        double loanAmount = 0;
        cin >> loanAmount;

        int noDrepeciationRecord = 0;
        cin >> noDrepeciationRecord;

        double totalAmount = downPayment + loanAmount;
        double monthlyPayment = loanAmount / loanDuration;

        if( loanDuration < 0 )
            break;

        double depreciationPorcentage = 0;
        vector<double> depreciationRecords(loanDuration + 1, 0);

        for( int i = 0; i < noDrepeciationRecord; i++ ){
            int monthNumber = 0;
            cin >> monthNumber;
            cin >> depreciationRecords[monthNumber];
        }

        double AcumulatedPayment = 0;
        int month = 0;

        for( int i = 0; i < depreciationRecords.size(); i++ ){
            if( depreciationRecords[i] != 0 ){
                depreciationPorcentage = depreciationRecords[i];
            }

            if( i != 0 ){
                AcumulatedPayment = AcumulatedPayment + monthlyPayment; 
            }

            double depreciation = 0;
            depreciation = totalAmount * depreciationPorcentage;
            totalAmount = totalAmount - depreciation;

            if( totalAmount > (loanAmount - AcumulatedPayment) ){
                month = i;
                break;
            }
        }

        if( month == 1 ){
            cout << "1 month" << endl;
        } else {
            cout << month << " months" << endl;
        }
    }
}