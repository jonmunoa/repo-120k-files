// fichero 21238 -- macros y constantes
#define LIMITE_21238 21338
#define FACTOR_21238 4

int aplicar_limite21238(int valor) {
    if (valor > LIMITE_21238) return LIMITE_21238;
    return valor * FACTOR_21238;
}
