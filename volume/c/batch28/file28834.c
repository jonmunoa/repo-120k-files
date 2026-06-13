// fichero 28834 -- macros y constantes
#define LIMITE_28834 28934
#define FACTOR_28834 5

int aplicar_limite28834(int valor) {
    if (valor > LIMITE_28834) return LIMITE_28834;
    return valor * FACTOR_28834;
}
