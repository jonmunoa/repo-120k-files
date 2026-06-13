// fichero 35406 -- macros y constantes
#define LIMITE_35406 35506
#define FACTOR_35406 2

int aplicar_limite35406(int valor) {
    if (valor > LIMITE_35406) return LIMITE_35406;
    return valor * FACTOR_35406;
}
