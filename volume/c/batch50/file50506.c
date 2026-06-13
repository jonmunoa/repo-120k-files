// fichero 50506 -- macros y constantes
#define LIMITE_50506 50606
#define FACTOR_50506 2

int aplicar_limite50506(int valor) {
    if (valor > LIMITE_50506) return LIMITE_50506;
    return valor * FACTOR_50506;
}
