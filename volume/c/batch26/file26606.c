// fichero 26606 -- macros y constantes
#define LIMITE_26606 26706
#define FACTOR_26606 2

int aplicar_limite26606(int valor) {
    if (valor > LIMITE_26606) return LIMITE_26606;
    return valor * FACTOR_26606;
}
