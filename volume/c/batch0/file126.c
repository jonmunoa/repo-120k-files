// fichero 126 -- macros y constantes
#define LIMITE_126 226
#define FACTOR_126 2

int aplicar_limite126(int valor) {
    if (valor > LIMITE_126) return LIMITE_126;
    return valor * FACTOR_126;
}
