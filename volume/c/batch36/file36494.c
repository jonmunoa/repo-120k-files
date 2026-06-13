// fichero 36494 -- macros y constantes
#define LIMITE_36494 36594
#define FACTOR_36494 5

int aplicar_limite36494(int valor) {
    if (valor > LIMITE_36494) return LIMITE_36494;
    return valor * FACTOR_36494;
}
