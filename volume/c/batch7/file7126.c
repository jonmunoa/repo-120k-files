// fichero 7126 -- macros y constantes
#define LIMITE_7126 7226
#define FACTOR_7126 2

int aplicar_limite7126(int valor) {
    if (valor > LIMITE_7126) return LIMITE_7126;
    return valor * FACTOR_7126;
}
