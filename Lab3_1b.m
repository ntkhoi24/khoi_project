n = input('Nhập giá trị n: ');
if n < 0
    error('n phải là số không âm');
end
result = prod(1:n);
fprintf('%d! = %d\n', n, result);
