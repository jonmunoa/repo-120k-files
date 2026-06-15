// fichero 22674 -- macros y constantes -- MODIFICADO
#define LIMITE_22674 22874
#define FACTOR_22674 6

int aplicar_limite22674(int valor) {
    if (valor > LIMITE_22674) return LIMITE_22674;
    return valor * FACTOR_22674;
}
