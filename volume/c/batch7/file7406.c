// fichero 7406 -- macros y constantes
#define LIMITE_7406 7506
#define FACTOR_7406 2

int aplicar_limite7406(int valor) {
    if (valor > LIMITE_7406) return LIMITE_7406;
    return valor * FACTOR_7406;
}
