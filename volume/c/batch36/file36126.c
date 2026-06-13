// fichero 36126 -- macros y constantes
#define LIMITE_36126 36226
#define FACTOR_36126 2

int aplicar_limite36126(int valor) {
    if (valor > LIMITE_36126) return LIMITE_36126;
    return valor * FACTOR_36126;
}
