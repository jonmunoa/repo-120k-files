// fichero 18394 -- macros y constantes
#define LIMITE_18394 18494
#define FACTOR_18394 5

int aplicar_limite18394(int valor) {
    if (valor > LIMITE_18394) return LIMITE_18394;
    return valor * FACTOR_18394;
}
