// fichero 8406 -- macros y constantes
#define LIMITE_8406 8506
#define FACTOR_8406 2

int aplicar_limite8406(int valor) {
    if (valor > LIMITE_8406) return LIMITE_8406;
    return valor * FACTOR_8406;
}
