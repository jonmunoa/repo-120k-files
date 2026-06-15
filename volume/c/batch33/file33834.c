// fichero 33834 -- macros y constantes -- MODIFICADO
#define LIMITE_33834 34034
#define FACTOR_33834 6

int aplicar_limite33834(int valor) {
    if (valor > LIMITE_33834) return LIMITE_33834;
    return valor * FACTOR_33834;
}
