#include <iostream>
using namespace std;

double tinhLaiDon(double tienGoc, double laiSuat, int soNam) {
    return tienGoc * laiSuat / 100 * soNam;
}

int main() {
    double tienGoc = 10000000;
    double laiSuat = 5; // 5%/năm
    int soNam = 2;

    double tienLai = tinhLaiDon(tienGoc, laiSuat, soNam);

    cout << "Tien lai: " << tienLai << " VND\n";
    cout << "Tong tien: " << tienGoc + tienLai << " VND\n";

    return 0;
}
