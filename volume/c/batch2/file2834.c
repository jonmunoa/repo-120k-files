// fichero 2834 -- macros y constantes
#define LIMITE_2834 2934
#define FACTOR_2834 5

int aplicar_limite2834(int valor) {
    if (valor > LIMITE_2834) return LIMITE_2834;
    return valor * FACTOR_2834;
}
