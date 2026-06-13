// fichero 20834 -- macros y constantes
#define LIMITE_20834 20934
#define FACTOR_20834 5

int aplicar_limite20834(int valor) {
    if (valor > LIMITE_20834) return LIMITE_20834;
    return valor * FACTOR_20834;
}
