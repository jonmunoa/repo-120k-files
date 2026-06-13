// fichero 29406 -- macros y constantes
#define LIMITE_29406 29506
#define FACTOR_29406 2

int aplicar_limite29406(int valor) {
    if (valor > LIMITE_29406) return LIMITE_29406;
    return valor * FACTOR_29406;
}
