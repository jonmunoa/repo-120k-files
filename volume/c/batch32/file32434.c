// fichero 32434 -- macros y constantes
#define LIMITE_32434 32534
#define FACTOR_32434 5

int aplicar_limite32434(int valor) {
    if (valor > LIMITE_32434) return LIMITE_32434;
    return valor * FACTOR_32434;
}
