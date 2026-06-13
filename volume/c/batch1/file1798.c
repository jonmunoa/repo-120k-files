// fichero 1798 -- macros y constantes
#define LIMITE_1798 1898
#define FACTOR_1798 4

int aplicar_limite1798(int valor) {
    if (valor > LIMITE_1798) return LIMITE_1798;
    return valor * FACTOR_1798;
}
