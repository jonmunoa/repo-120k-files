// fichero 32126 -- macros y constantes
#define LIMITE_32126 32226
#define FACTOR_32126 2

int aplicar_limite32126(int valor) {
    if (valor > LIMITE_32126) return LIMITE_32126;
    return valor * FACTOR_32126;
}
