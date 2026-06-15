// fichero 42406 -- macros y constantes -- MODIFICADO
#define LIMITE_42406 42606
#define FACTOR_42406 3

int aplicar_limite42406(int valor) {
    if (valor > LIMITE_42406) return LIMITE_42406;
    return valor * FACTOR_42406;
}
