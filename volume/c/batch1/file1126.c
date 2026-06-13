// fichero 1126 -- macros y constantes
#define LIMITE_1126 1226
#define FACTOR_1126 2

int aplicar_limite1126(int valor) {
    if (valor > LIMITE_1126) return LIMITE_1126;
    return valor * FACTOR_1126;
}
