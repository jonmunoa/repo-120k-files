// fichero 16126 -- macros y constantes
#define LIMITE_16126 16226
#define FACTOR_16126 2

int aplicar_limite16126(int valor) {
    if (valor > LIMITE_16126) return LIMITE_16126;
    return valor * FACTOR_16126;
}
