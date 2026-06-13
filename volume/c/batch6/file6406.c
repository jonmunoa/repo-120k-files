// fichero 6406 -- macros y constantes
#define LIMITE_6406 6506
#define FACTOR_6406 2

int aplicar_limite6406(int valor) {
    if (valor > LIMITE_6406) return LIMITE_6406;
    return valor * FACTOR_6406;
}
