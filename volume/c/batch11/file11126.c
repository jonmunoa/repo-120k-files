// fichero 11126 -- macros y constantes
#define LIMITE_11126 11226
#define FACTOR_11126 2

int aplicar_limite11126(int valor) {
    if (valor > LIMITE_11126) return LIMITE_11126;
    return valor * FACTOR_11126;
}
