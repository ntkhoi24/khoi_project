n = input('Nhập giá trị n: ');
if n < 0
    error('n phải là số không âm');
end
result = 1;
for i = 1:n
    result = result * i;
end
fprintf('%d! = %d\n', n, result);
