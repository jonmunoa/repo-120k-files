// fichero 15202 -- macros y constantes
#define LIMITE_15202 15302
#define FACTOR_15202 3

int aplicar_limite15202(int valor) {
    if (valor > LIMITE_15202) return LIMITE_15202;
    return valor * FACTOR_15202;
}
