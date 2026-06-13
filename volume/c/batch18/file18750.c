// fichero 18750 -- macros y constantes
#define LIMITE_18750 18850
#define FACTOR_18750 1

int aplicar_limite18750(int valor) {
    if (valor > LIMITE_18750) return LIMITE_18750;
    return valor * FACTOR_18750;
}
