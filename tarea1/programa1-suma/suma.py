import sys

if len(sys.argv) == 3:
    a = float(sys.argv[1])
    b = float(sys.argv[2])
elif len(sys.argv) == 1:
    a = 0.1
    b = 0.2
else:
    print("Uso: python3 suma.py [numero1 numero2]")
    sys.exit(1)

resultado = a + b
print(f"{resultado:.17g}")
