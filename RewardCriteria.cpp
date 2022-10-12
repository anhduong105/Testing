#include <iostream>

using namespace std;

int main()
{
    float GPA;
    int total = 0;
    string conduct;
    cout << "Nhap diem trung binh: " << endl;
    cin >> GPA;
    cout << "Nhap hanh kiem: " << endl;
    cin >> conduct;
    if (conduct == "tot") {
        if (GPA >= 9.0 && GPA <= 10.0) {
            total = 300;
        } else if (GPA >= 8.0 && GPA < 9.0) {
            total = 200;
        } else if (GPA >= 6.5 && GPA < 8.0) {
            total = 100;
        } else if (GPA > 10.0 || GPA < 0) {
            total = -1;
        }
    } else if (conduct == "kha") {
        if (GPA >= 9.0 && GPA <= 10.0) {
            total = 200;
        } else if (GPA >= 8.0 && GPA < 9.0) {
            total = 150;
        } else if (GPA >= 6.5 && GPA < 8.0) {
            total = 50;
        } else if (GPA > 10.0 || GPA < 0) {
            total = -1;
        }
    }

    if (total == -1) {
        cout << "Khong hop le";
    }
    else if (total == 0) {
        cout << "Khong duoc thuong.";
    }
    else {
        cout << "Hoc sinh duoc thuong "
        << total
        << " nghin dong.";
    }
    return 0;
}

