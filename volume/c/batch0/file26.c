// fichero 26 -- macros y constantes
#define LIMITE_26 126
#define FACTOR_26 2

int aplicar_limite26(int valor) {
    if (valor > LIMITE_26) return LIMITE_26;
    return valor * FACTOR_26;
}
