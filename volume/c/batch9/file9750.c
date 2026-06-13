// fichero 9750 -- macros y constantes
#define LIMITE_9750 9850
#define FACTOR_9750 1

int aplicar_limite9750(int valor) {
    if (valor > LIMITE_9750) return LIMITE_9750;
    return valor * FACTOR_9750;
}
