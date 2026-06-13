// fichero 18494 -- macros y constantes
#define LIMITE_18494 18594
#define FACTOR_18494 5

int aplicar_limite18494(int valor) {
    if (valor > LIMITE_18494) return LIMITE_18494;
    return valor * FACTOR_18494;
}
