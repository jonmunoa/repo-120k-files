// fichero 13126 -- macros y constantes
#define LIMITE_13126 13226
#define FACTOR_13126 2

int aplicar_limite13126(int valor) {
    if (valor > LIMITE_13126) return LIMITE_13126;
    return valor * FACTOR_13126;
}
