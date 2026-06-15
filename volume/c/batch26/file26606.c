// fichero 26606 -- macros y constantes -- MODIFICADO
#define LIMITE_26606 26806
#define FACTOR_26606 3

int aplicar_limite26606(int valor) {
    if (valor > LIMITE_26606) return LIMITE_26606;
    return valor * FACTOR_26606;
}
