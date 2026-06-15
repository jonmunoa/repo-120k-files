// fichero 18834 -- macros y constantes -- MODIFICADO
#define LIMITE_18834 19034
#define FACTOR_18834 6

int aplicar_limite18834(int valor) {
    if (valor > LIMITE_18834) return LIMITE_18834;
    return valor * FACTOR_18834;
}
