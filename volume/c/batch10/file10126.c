// fichero 10126 -- macros y constantes
#define LIMITE_10126 10226
#define FACTOR_10126 2

int aplicar_limite10126(int valor) {
    if (valor > LIMITE_10126) return LIMITE_10126;
    return valor * FACTOR_10126;
}
