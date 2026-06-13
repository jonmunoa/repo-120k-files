// fichero 40258 -- macros y constantes
#define LIMITE_40258 40358
#define FACTOR_40258 4

int aplicar_limite40258(int valor) {
    if (valor > LIMITE_40258) return LIMITE_40258;
    return valor * FACTOR_40258;
}
