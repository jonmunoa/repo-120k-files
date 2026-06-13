// fichero 6126 -- macros y constantes
#define LIMITE_6126 6226
#define FACTOR_6126 2

int aplicar_limite6126(int valor) {
    if (valor > LIMITE_6126) return LIMITE_6126;
    return valor * FACTOR_6126;
}
