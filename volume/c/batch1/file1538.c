// fichero 1538 -- macros y constantes
#define LIMITE_1538 1638
#define FACTOR_1538 4

int aplicar_limite1538(int valor) {
    if (valor > LIMITE_1538) return LIMITE_1538;
    return valor * FACTOR_1538;
}
