A = ones(2, 3);

B = rand(3, 3);

C = 2 + (5-2) * randn(2, 5); 

E = reshape(1:5, 1, 5);  

F = reshape(1:5, 5, 1);  

G = eye(4);

diagonal_values = [1 2 3 4];
H = diag(diagonal_values);

I = 10.^(0:2/(6-1):2);

rand_matrix = rand(2,2);
ones_matrix = ones(3,2);
J = [rand_matrix; ones_matrix];

J = blkdiag(rand(2), ones(3));

ones_matrix = ones(3,4);
K = tril(ones_matrix, -1); 

disp(A);
disp(B);
disp(C);
disp(E);
disp(F);
disp(G);
disp(H);
disp(I);
disp(J);
disp(K);