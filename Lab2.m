A = reshape(1:36, 6, 6);

A(3, 5)

A(1:3, 4)

repmat(A(4, 1), 3, 1) 

A([2 2 5 5], [3 1 3 1])

A(:, 4)

A(4, :)

A(:)

A(end, 3)

A(end-1:end, end-1:end)

A(end-3:end, 1)

A(end:-1:1, :)

diag(A) 