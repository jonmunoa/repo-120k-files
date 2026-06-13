// fichero 42406 -- macros y constantes
#define LIMITE_42406 42506
#define FACTOR_42406 2

int aplicar_limite42406(int valor) {
    if (valor > LIMITE_42406) return LIMITE_42406;
    return valor * FACTOR_42406;
}
