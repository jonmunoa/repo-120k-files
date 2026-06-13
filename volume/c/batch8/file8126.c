// fichero 8126 -- macros y constantes
#define LIMITE_8126 8226
#define FACTOR_8126 2

int aplicar_limite8126(int valor) {
    if (valor > LIMITE_8126) return LIMITE_8126;
    return valor * FACTOR_8126;
}
