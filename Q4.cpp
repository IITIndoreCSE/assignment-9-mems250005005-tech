#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    const int MONTHS = 12;
    SalesRecord records[MONTHS] = {
        {"January",0},{"February",0},{"March",0},{"April",0},
        {"May",0},{"June",0},{"July",0},{"August",0},
        {"September",0},{"October",0},{"November",0},{"December",0}
    };

    
    for (int i = 0; i < MONTHS; ++i) {
        cout << records[i].month << ": ";
        cin >> records[i].amount;
    }

    
    ofstream fout("sales_data.txt");
    if (!fout) {
        cerr << "Error opening file for writing.\n";
        return 1;
    }
    for (int i = 0; i < MONTHS; ++i) {
        fout << records[i].month << ' ' << records[i].amount << '\n';
    }
    fout.close();
    cout << "\nData successfully written to 'sales_data.txt'.\n";

   
    SalesRecord readback[MONTHS];
    ifstream fin("sales_data.txt");
    if (!fin) {
        cerr << "Error opening file for reading.\n";
        return 1;
    }
    for (int i = 0; i < MONTHS; ++i) {
        fin >> readback[i].month >> readback[i].amount;
    }
    fin.close();


    float sum = 0;
    for (int i = 0; i < MONTHS; ++i) sum += readback[i].amount;
    float avg = sum / MONTHS;

    cout << fixed << setprecision(2);
    cout << "\nYearly Average Sales: " << avg << "\n\n";

    cout << "Months with sales above yearly average:\n";
    for (int i = 0; i < MONTHS; ++i) {
        if (readback[i].amount > avg) {
            cout << left << setw(10) << readback[i].month << " : " 
                 << fixed << setprecision(2) << readback[i].amount << '\n';
        }
    }

    return 0;
}

