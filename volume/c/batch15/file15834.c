// fichero 15834 -- macros y constantes -- MODIFICADO
#define LIMITE_15834 16034
#define FACTOR_15834 6

int aplicar_limite15834(int valor) {
    if (valor > LIMITE_15834) return LIMITE_15834;
    return valor * FACTOR_15834;
}
