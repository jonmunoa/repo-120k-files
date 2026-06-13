// fichero 32122 -- macros y constantes
#define LIMITE_32122 32222
#define FACTOR_32122 3

int aplicar_limite32122(int valor) {
    if (valor > LIMITE_32122) return LIMITE_32122;
    return valor * FACTOR_32122;
}
