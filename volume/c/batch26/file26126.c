// fichero 26126 -- macros y constantes
#define LIMITE_26126 26226
#define FACTOR_26126 2

int aplicar_limite26126(int valor) {
    if (valor > LIMITE_26126) return LIMITE_26126;
    return valor * FACTOR_26126;
}
