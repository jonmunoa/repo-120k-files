// fichero 12126 -- macros y constantes
#define LIMITE_12126 12226
#define FACTOR_12126 2

int aplicar_limite12126(int valor) {
    if (valor > LIMITE_12126) return LIMITE_12126;
    return valor * FACTOR_12126;
}
