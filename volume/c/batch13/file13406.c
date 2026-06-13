// fichero 13406 -- macros y constantes
#define LIMITE_13406 13506
#define FACTOR_13406 2

int aplicar_limite13406(int valor) {
    if (valor > LIMITE_13406) return LIMITE_13406;
    return valor * FACTOR_13406;
}
