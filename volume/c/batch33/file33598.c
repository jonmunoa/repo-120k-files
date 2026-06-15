// fichero 33598 -- macros y constantes -- MODIFICADO
#define LIMITE_33598 33798
#define FACTOR_33598 5

int aplicar_limite33598(int valor) {
    if (valor > LIMITE_33598) return LIMITE_33598;
    return valor * FACTOR_33598;
}
