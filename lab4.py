# Yêu cầu người dùng nhập số
number = int(input("Vui lòng nhập một số: "))

# Kiểm tra số chẵn lẻ bằng cách chia lấy dư cho 2
if number % 2 == 0:
    print(f"{number} là số chẵn")
else:
    print(f"{number} là số lẻ")