// fichero 41126 -- macros y constantes
#define LIMITE_41126 41226
#define FACTOR_41126 2

int aplicar_limite41126(int valor) {
    if (valor > LIMITE_41126) return LIMITE_41126;
    return valor * FACTOR_41126;
}
