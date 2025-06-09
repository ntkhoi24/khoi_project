#include <stdio.h>

int main() {
    // Duyệt qua tất cả các số từ 10 đến 99
    for (int num = 10; num <= 99; num++) {
        int tens = num / 10; // Chữ số hàng chục
        int units = num % 10; // Chữ số hàng đơn vị

        // Kiểm tra điều kiện: tích của 2 chữ số bằng 2 lần tổng của chúng
        if (tens * units == 2 * (tens + units)) {
            printf("%d\n", num); // In ra số thỏa mãn
        }
    }

    return 0;
}