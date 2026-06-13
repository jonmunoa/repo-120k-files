// fichero 15406 -- macros y constantes
#define LIMITE_15406 15506
#define FACTOR_15406 2

int aplicar_limite15406(int valor) {
    if (valor > LIMITE_15406) return LIMITE_15406;
    return valor * FACTOR_15406;
}
