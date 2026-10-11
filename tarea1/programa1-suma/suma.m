args = argv();

if numel(args) == 2
    a = str2double(args{1});
    b = str2double(args{2});

    if isnan(a) || isnan(b)
        fprintf('Error: escribe dos numeros validos.\n');
        exit(1);
    end
elseif numel(args) == 0
    a = 0.1;
    b = 0.2;
else
    fprintf('Uso: octave --quiet suma.m [numero1 numero2]\n');
    exit(1);
end

fprintf('%.17g\n', a + b);
