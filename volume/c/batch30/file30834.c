// fichero 30834 -- macros y constantes
#define LIMITE_30834 30934
#define FACTOR_30834 5

int aplicar_limite30834(int valor) {
    if (valor > LIMITE_30834) return LIMITE_30834;
    return valor * FACTOR_30834;
}
