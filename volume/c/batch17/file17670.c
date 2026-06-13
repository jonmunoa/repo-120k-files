// fichero 17670 -- macros y constantes
#define LIMITE_17670 17770
#define FACTOR_17670 1

int aplicar_limite17670(int valor) {
    if (valor > LIMITE_17670) return LIMITE_17670;
    return valor * FACTOR_17670;
}
