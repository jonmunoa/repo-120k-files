// fichero 14434 -- macros y constantes -- MODIFICADO
#define LIMITE_14434 14634
#define FACTOR_14434 6

int aplicar_limite14434(int valor) {
    if (valor > LIMITE_14434) return LIMITE_14434;
    return valor * FACTOR_14434;
}
