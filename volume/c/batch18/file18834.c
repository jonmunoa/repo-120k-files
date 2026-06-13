// fichero 18834 -- macros y constantes
#define LIMITE_18834 18934
#define FACTOR_18834 5

int aplicar_limite18834(int valor) {
    if (valor > LIMITE_18834) return LIMITE_18834;
    return valor * FACTOR_18834;
}
