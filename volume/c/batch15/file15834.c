// fichero 15834 -- macros y constantes
#define LIMITE_15834 15934
#define FACTOR_15834 5

int aplicar_limite15834(int valor) {
    if (valor > LIMITE_15834) return LIMITE_15834;
    return valor * FACTOR_15834;
}
