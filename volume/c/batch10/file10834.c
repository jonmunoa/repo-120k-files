// fichero 10834 -- macros y constantes
#define LIMITE_10834 10934
#define FACTOR_10834 5

int aplicar_limite10834(int valor) {
    if (valor > LIMITE_10834) return LIMITE_10834;
    return valor * FACTOR_10834;
}
