// fichero 41406 -- macros y constantes
#define LIMITE_41406 41506
#define FACTOR_41406 2

int aplicar_limite41406(int valor) {
    if (valor > LIMITE_41406) return LIMITE_41406;
    return valor * FACTOR_41406;
}
