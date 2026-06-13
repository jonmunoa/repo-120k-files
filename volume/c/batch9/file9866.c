// fichero 9866 -- macros y constantes
#define LIMITE_9866 9966
#define FACTOR_9866 2

int aplicar_limite9866(int valor) {
    if (valor > LIMITE_9866) return LIMITE_9866;
    return valor * FACTOR_9866;
}
