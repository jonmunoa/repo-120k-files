// fichero 36834 -- macros y constantes
#define LIMITE_36834 36934
#define FACTOR_36834 5

int aplicar_limite36834(int valor) {
    if (valor > LIMITE_36834) return LIMITE_36834;
    return valor * FACTOR_36834;
}
